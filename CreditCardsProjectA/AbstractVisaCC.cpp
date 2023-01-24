//
//  AbstractVisaCC.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#include "AbstractVisaCC.hpp"
AbstractVisaCC::AbstractVisaCC(string name,string num,string date)
{
    absVisaCardHolder = name;
    absVisaCardNum = num;
    absVisaExDate = date;
}

void AbstractVisaCC::intake(string name,string num,string date)
{
    absVisaCardHolder = name;
    absVisaCardNum = num;
    absVisaExDate = date;
    //cout <<"I'm in visa!";
}

void AbstractVisaCC::setAbsVisaCardHolder(string h)
{
    absVisaCardHolder = h;
}

void AbstractVisaCC::setAbsVisaCardNum(string c)
{
    absVisaCardNum = c;
}

void AbstractVisaCC::setAbsVisaExDate(string e)
{
    absVisaExDate = e;
}
