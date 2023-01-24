//
//  MasterCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/7/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef MasterCC_hpp
#define MasterCC_hpp

#include <stdio.h>
#include "CreditCard.hpp"

class MasterCC : public CreditCard
{
private:
    string cardHolder;
    string cardNumber;
    string expirationDate;
public:
     MasterCC();
};
#endif /* MasterCC_hpp */
