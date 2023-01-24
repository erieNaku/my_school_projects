

#ifndef VisaCC_hpp
#define VisaCC_hpp

#include <stdio.h>
#include "CreditCard.hpp"

class VisaCC : public CreditCard
{
private:
    string cardHolder;
    string cardNumber;
    string expirationDate;
public:
    VisaCC();
};
#endif /* VisaCC_hpp */
