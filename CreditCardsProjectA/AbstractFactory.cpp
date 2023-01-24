
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
