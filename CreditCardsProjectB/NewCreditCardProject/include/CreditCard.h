#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <iostream>
#include <string>
#include<vector>
#include<iomanip>

//#include "CreditType.h"
using namespace std;
class CreditCard
{
    public:
        CreditCard();
        CreditCard(string,string,string);
        virtual void createCredit()=0;//abstract class to make sure nobody accesses credit card directly
        //virtual functions because the subclasses will override all of these functions
        virtual string getname() { return cardHolder;};
        virtual string getdate() { return creditDate;};
        virtual string getnum(){ return creditNum;} ;
        virtual void setname(string name){cardHolder=name;};
        virtual void setdate(string date){creditDate=date;};
        virtual void setnum(string num){creditNum=num;};
        virtual ~CreditCard();
    protected:
        string creditNum;
        string creditDate;
        string cardHolder;

    private:
};

#endif // CREDITCARD_H
