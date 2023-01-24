
#ifndef CreditCard_hpp
#define CreditCard_hpp

#include <stdio.h>
#include <string>
using namespace std;

class CreditCard {
private:
    string cardHolder;
    string cardNumber;
    string expirationDate;
public:
    virtual void intake(string,string,string)=0;
    virtual string whereCard(){return "";}
    virtual string getname(){return cardHolder;};
    virtual string getnum(){return cardNumber;};
    virtual string getdate(){return expirationDate;};
    virtual void setname(string name){cardHolder=name;};
    virtual void setnum(string num){cardNumber=num;};
    virtual void setdate(string date){expirationDate=date;};


};
#endif /* CreditCard_hpp */
