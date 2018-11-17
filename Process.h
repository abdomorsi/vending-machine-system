#ifndef PROCESS_H
#define PROCESS_H
#include<bits/stdc++.h>
#include "machine.h"
using namespace std;


class Process:public machine
{
    public:
        Process();
        void get_money();

        void get_order( );

        void if_exist();
        void out_money ();
        void change() ;
        double money;
        int order;
        void confirm() ;
        void adding() ;

    protected:


    private:
        int twen  , ten  , five , ones , half  ;
        double add_money;
};

#endif // PROCESS_H
