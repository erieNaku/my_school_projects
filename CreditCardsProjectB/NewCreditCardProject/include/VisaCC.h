#ifndef VISACC_H
#define VISACC_H
#include <string>
#include<vector>
#include<iomanip>
#include"CreditCard.h"
using namespace std;

class VisaCC:public CreditCard
{
    public:
        VisaCC();
        VisaCC(string,string,string);
        virtual void createCredit()override;//made this override so that when the situation called for it, it could override the main class CreditCard
        string getname()override { return cardHolder;};
        string getdate() override{ return creditDate;};
        string getnum()override{ return creditNum;} ;
        void setname(string name)override{cardHolder=name;};
        void setdate(string date)override{creditDate=date;};
        void setnum(string num)override{creditNum=num;};
        virtual ~VisaCC();

    protected:

    private:
        string creditNum;
        string creditDate;
        string cardHolder;
};

#endif // VISACC_H
