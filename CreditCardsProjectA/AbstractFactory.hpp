

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include <stdio.h>
#include <string>
#include "CreditCard.hpp"
#include "AbstractVisaCC.hpp"
#include "AbstractAmExCC.hpp"
#include "AbstractMasterCC.hpp"
#include "AbstractDiscoverCC.hpp"
using namespace std;

class AbstractFactory
{
private:
    string absCardHolder;
    string absCardNumber;
    string absExpirationDate;
public:
    AbstractFactory();
    virtual void setAbsCardHolder(string);
    virtual void setAbsCardNumber(string);
    virtual void setAbsExpiratonDate(string);


};
#endif /* AbstractFactory_hpp */
