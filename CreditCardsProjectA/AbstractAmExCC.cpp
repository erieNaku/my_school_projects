//
//  AbstractAmExCC.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//


#include "AbstractAmExCC.hpp"
AbstractAmExCC::AbstractAmExCC(string name,string num,string date)
{
    absAmExCardHolder=name;
    absAmExCardNum=num;
    absAmExExpDate=date;
}

void AbstractAmExCC::intake(string name,string num,string date)
{
    absAmExCardHolder=name;
    absAmExCardNum=num;
    absAmExExpDate=date;
}

void AbstractAmExCC::setAbsAmExCardHolder(string h)
{
    absAmExCardHolder = h;
}

void AbstractAmExCC::setAbsAmExCardNum(string c)
{
    absAmExCardNum = c;
}

void AbstractAmExCC::setAbsAmExExpDate(string e)
{
    absAmExExpDate = e;
}
