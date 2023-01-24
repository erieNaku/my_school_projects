#ifndef AMEXCC_H
#define AMEXCC_H
#include <iostream>
#include <string>
#include<vector>
#include<iomanip>
#include"CreditCard.h"
using namespace std;

class AmExCC:public CreditCard
{
    public:
        AmExCC();
        AmExCC(string,string,string);
        virtual void createCredit()override;//made this override so that when the situation called for it, it could override the main class CreditCard
        string getname()override { return cardHolder;};
        string getdate() override{ return creditDate;};
        string getnum()override{ return creditNum;} ;
        void setname(string name)override{cardHolder=name;};
        void setdate(string date)override{creditDate=date;};
        void setnum(string num)override{creditNum=num;};
        virtual ~AmExCC();


    protected:

    private:
        string creditNum;
        string creditDate;
        string cardHolder;
};

#endif // AMEXCC_H
