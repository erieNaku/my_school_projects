//
//  AbstractDiscoverCC.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#include "AbstractDiscoverCC.hpp"

AbstractDiscoverCC::AbstractDiscoverCC(string name,string num,string date)
{
    absDiscoverCardHolder = name;
    absDiscoverCardNum = num;
    absDiscoverExDate = date;
}

void AbstractDiscoverCC::intake(string name,string num,string date)
{
    absDiscoverCardHolder = name;
    absDiscoverCardNum = num;
    absDiscoverExDate = date;
}

void AbstractDiscoverCC::setAbsDiscoverCardHolder(string h)
{
    absDiscoverCardHolder = h;
}

void AbstractDiscoverCC::setAbsDiscoverCardNum(string c)
{
    absDiscoverCardNum = c;
}

void AbstractDiscoverCC::setAbsDiscoverExDate(string e)
{
    absDiscoverExDate = e;
}
