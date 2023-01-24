//
//  AbstractDiscoverCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef AbstractDiscoverCC_hpp
#define AbstractDiscoverCC_hpp
#include <iostream>
#include <stdio.h>
#include "AbstractFactory.hpp"

class AbstractDiscoverCC : public CreditCard
{
private:
    string absDiscoverCardHolder;
    string absDiscoverCardNum;
    string absDiscoverExDate;
public:
    //void DiscoverCC();
    AbstractDiscoverCC(string,string,string);
    string whereCard(){return "This card is a Discover card";}
    void intake(string,string,string);
    static bool valid(string);
    void setAbsDiscoverCardHolder(string);
    void setAbsDiscoverCardNum(string);
    void setAbsDiscoverExDate(string);
    string getname(){return absDiscoverCardHolder;};
    string getnum(){return absDiscoverCardNum;};
    string getdate(){return absDiscoverExDate;};
};
#endif /* AbstractDiscoverCC_hpp */
