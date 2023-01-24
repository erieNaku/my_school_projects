

#ifndef DiscoverCC_hpp
#define DiscoverCC_hpp

#include <stdio.h>
#include "CreditCard.hpp"

class DiscoverCC : public CreditCard
{
private:
    string cardHolder;
    string cardNumber;
    string expirationDate;
public:
    DiscoverCC();
};

#endif /* DiscoverCC_hpp */
