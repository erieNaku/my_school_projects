//
//  AbstractMasterCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef AbstractMasterCC_hpp
#define AbstractMasterCC_hpp
#include <iostream>
#include <stdio.h>
#include "CreditCard.hpp"

class AbstractMasterCC : public CreditCard
{
private:
    string absMasterCardHolder;
    string absMasterCardNum;
    string absMasterExDate;
public:
    //void MasterCC();
    //AbstractMasterCC();
    AbstractMasterCC(string,string,string);
    string whereCard(){return "This card is a Masters card";}
    void intake(string,string,string);
    static bool valid(string);
    void setAbsMasterCardHolder(string);
    void setAbsMasterCardNum(string);
    void setAbsMasterExDate(string);
    string getname(){return absMasterCardHolder;};
    string getnum(){return absMasterCardNum;};
    string getdate(){return absMasterExDate;};
};

#endif /* AbstractMasterCC_hpp */
