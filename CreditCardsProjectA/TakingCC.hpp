//
//  TakingCC.hpp
//  creditCards
//
//  Created by Bethany Newell on 4/18/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//

#ifndef TakingCC_hpp
#define TakingCC_hpp
#include <vector>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include "AbstractFactory.hpp"
#include "CreditCard.hpp"
#include "AbstractDiscoverCC.hpp"
#include "AbstractAmExCC.hpp"
#include "AbstractVisaCC.hpp"
#include "AbstractMasterCC.hpp"
#include "LonLonCC.hpp"

class TakingCC
{
private:
    string takingCardHolder;
    string takingCardNum;
    string takingExDate;
public:
    //void verifyCard();
    int determineType(string);
    CreditCard* createCard(int c, string name,string num,string date);
    void fileget();
    //CreditCard* determineType(string);
    //CreditCard* createCard(int);

};

#endif /* TakingCC_hpp */
