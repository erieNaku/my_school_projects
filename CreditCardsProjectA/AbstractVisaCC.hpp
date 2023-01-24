//
//  AbstractVisaCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef AbstractVisaCC_hpp
#define AbstractVisaCC_hpp

#include <stdio.h>
#include<iostream>
#include "CreditCard.hpp"
using namespace std;

class AbstractVisaCC : public CreditCard
{
private:
    string absVisaCardHolder;
    string absVisaCardNum;
    string absVisaExDate;
public:
    //void VisaCC();
    AbstractVisaCC(string,string,string);
    string whereCard(){return "This card is a Visa card";}
    void intake(string,string,string);
    static bool valid(string);
    void setAbsVisaCardHolder(string);
    void setAbsVisaCardNum(string);
    void setAbsVisaExDate(string);
    string getname(){return absVisaCardHolder;};
    string getnum(){return absVisaCardNum;};
    string getdate(){return absVisaExDate;};
};
#endif /* AbstractVisaCC_hpp */
