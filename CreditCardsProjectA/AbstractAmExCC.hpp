//
//  AbstractAmExCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef AbstractAmExCC_hpp
#define AbstractAmExCC_hpp
#include <iostream>
#include <stdio.h>
#include "CreditCard.hpp"

class AbstractAmExCC : public CreditCard
{
private:
    string absAmExCardHolder;
    string absAmExCardNum;
    string absAmExExpDate;
public:
   // void AmExCC();
    AbstractAmExCC(string,string,string);
    void intake(string,string,string);
    static bool valid(string);
    void setAbsAmExCardHolder(string);
    void setAbsAmExCardNum(string);
    void setAbsAmExExpDate(string);
    string whereCard(){return "This card is a American Express card";}
    string getname(){return absAmExCardHolder;};
    string getnum(){return absAmExCardNum;};
    string getdate(){return absAmExExpDate;};
};

#endif /* AbstractAmExCC_hpp */
