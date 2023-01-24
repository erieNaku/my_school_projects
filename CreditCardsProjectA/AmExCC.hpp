

#ifndef AmExCC_hpp
#define AmExCC_hpp

#include <stdio.h>
#include "CreditCard.hpp"

class AmExCC : public CreditCard
{
private:
    string cardHolder;
    string cardNumber;
    string expirationDate;
public:
    AmExCC();
    
};

#endif /* AmExCC_hpp */
