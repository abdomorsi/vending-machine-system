#include <iostream>
#include<bits/stdc++.h>
#include "Process.h"
#include "machine.h"

using namespace std;

int main()
{


   Process test;
   int c = 0;
   for( int i = 1; i<=10 ; i++ ){ if ( test.num[i]>0 ) c=1; }
   if (c == 0){ cout << "Out of items !"; }

   test.get_money();
   test.get_order();
   test.confirm();

   string s ;
   cin >> s;
   if ( s == "No" || s == "no" || s == "NO" ){test.change(); test.out_money(); return 0; }

   test.if_exist();
   test.change();
   test.out_money();
   test.adding();



    return 0;
}
