//
//  AmExCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/7/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

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
