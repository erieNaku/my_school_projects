//
//  AbstractFactory.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/9/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#include "AbstractFactory.hpp"
#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory()
{
    absCardHolder = " ";
    absCardNumber = " ";
    absExpirationDate = " ";
}


void AbstractFactory::setAbsCardHolder(string h)
{
    absCardHolder = h;
}

void AbstractFactory::setAbsCardNumber(string c)
{
    absCardNumber = c;
}

void AbstractFactory::setAbsExpiratonDate(string e)
{
    absExpirationDate = e;
}
