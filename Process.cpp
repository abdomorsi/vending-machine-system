#include "Process.h"


Process::Process()
{
    twen = 0 , ten = 0 , five = 0 , ones = 0 , half = 0 , add_money = 0 ;

}

void Process :: confirm (){

    cout << "Did you really want to buy this item ?! \n"  ;

}

void Process :: get_money()
{
    cin>>money;
}

void Process :: get_order()
{
    cin>>order;
}
void Process :: if_exist()
{
    if(num[order]>0)
    {
        money-=price[order];
        add_money = price[order];
        num[order]--;
        //return true;
    }
    else{
        cout << "your order in not available"<<endl;
        cout << " 1) return your money back \n " << "2) order another item \n ";
        int choose ;
        cout << "your choose: ";
        cin >> choose;
        if (choose == 2){
            get_order();
            if_exist();
        }

    }

        //return false;
}

void Process :: change(){
     twen = money/20 ;

    int diff = money - twen*20;


    if ( diff >= 10 ){
        ten = diff/10 ;
        diff-=10;
    }

    if ( diff >= 5 ){
        five = diff/5 ;
        diff-=5;
    }
     ones = diff%10;
    diff-=ones;
    half = diff ;

 }

 void Process :: out_money ( )
 {
    if ( num_money[0] >= twen  ){ cout<<"20's = "<< twen << endl; num_money[0]-=twen;  }
    int diff = twen - num_money[0];

    if (diff < 0) diff=0;
    ten += diff*2;

    if ( num_money[1] >= ten  ){ cout<<"10's = "<< ten << endl; num_money[1]-=ten;  }
     diff = ten - num_money[1];

    if (diff < 0) diff=0;
    five += diff*2;

    if ( num_money[2] >= five  ){ cout<<"5's = "<< five<< endl; num_money[2]-=five;  }
     diff = five - num_money[2];

    if (diff < 0) diff=0;
    ones += diff*5;

    if ( num_money[3] >= ones  ){ cout<<"1's = "<< ones<< endl; num_money[3]-=ones;  }
     diff = ones - num_money[3];

    if (diff < 0) diff=0;
    half += diff*2;

    if ( num_money[4] >= ones  ){ cout<<"0.5's = "<< half<< endl; num_money[4]-=half;  }


 }

 void Process :: adding()
 {

     add_money = price[order];

     if ( add_money >= 20 ){ int A = add_money/num_money[0]; num_money[0]+=A; add_money-=A*num_money[0]; }
     if ( add_money >= 10 ){ int A = add_money/num_money[1]; num_money[1]+=A; add_money-=A*num_money[1]; }
     if ( add_money >= 5  ){ int A = add_money/num_money[2]; num_money[2]+=A; add_money-=A*num_money[2]; }
     if ( add_money >= 1  ){ int A = add_money/num_money[3]; num_money[3]+=A; add_money-=A*num_money[3]; }
     if ( add_money >= 0.5 ){ int A = add_money/num_money[4]; num_money[4]+=A; add_money-=A*num_money[4];}
 }






