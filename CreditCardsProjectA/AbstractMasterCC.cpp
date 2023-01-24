//
//  AbstractMasterCC.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/12/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#include "AbstractMasterCC.hpp"

\
/*AbstractMasterCC::AbstractMasterCC()
{
    absMasterCardHolder = " ";
    absMasterCardNum = " ";
    absMasterExDate = " ";
}*/
AbstractMasterCC::AbstractMasterCC(string name,string num,string date)
{
    absMasterCardHolder = name;
    absMasterCardNum = num;
    absMasterExDate = date;
}

void AbstractMasterCC::intake(string name,string num,string date)
{
    absMasterCardHolder = name;
    absMasterCardNum = num;
    absMasterExDate = date;

}
void AbstractMasterCC::setAbsMasterCardHolder(string h)
{
    absMasterCardHolder = h;
}

void AbstractMasterCC::setAbsMasterCardNum(string c)
{
    absMasterCardNum = c;
}

void AbstractMasterCC::setAbsMasterExDate(string e)
{
    absMasterExDate = e;
}
