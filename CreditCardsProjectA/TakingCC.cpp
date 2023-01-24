//
//  TakingCC.cpp
//  creditCards
//
//  Created by Bethany Newell on 4/18/22.
//  Copyright © 2022 Bethany Newell. All rights reserved.
//
#include <iostream>
#include "TakingCC.hpp"
//1->master
//2->visa
//3->amex
//4->discover
//5->lonlon
int TakingCC::determineType(string takingCardNum)
{
    //counter++;
    int choice;
    if(takingCardNum.size()>19)
    {
        return 0;
    }
    if(takingCardNum.size()==16)
    {
        if(takingCardNum[0]=='5')
        {
            int digitTemp=static_cast<int>(takingCardNum[1]);
            if(digitTemp<=5||digitTemp>=1)
            {
                return 1;
            }
        }
        else if(takingCardNum[0]=='6' && takingCardNum[1]=='0' &&takingCardNum[2]=='1' &&takingCardNum[3]=='1'){
            return 4;
        }
    }
    if(takingCardNum.size()==16 || takingCardNum.size()==13)
    {
        if(takingCardNum[0]=='4')
        {
            return 2;
        }

    }
    if(takingCardNum.size()==15)
    {
        if(takingCardNum[0]=='3')
        {
            if(takingCardNum[1]=='4' ||takingCardNum[1]=='7')
            {
                return 3;
            }
        }
    }
    if(takingCardNum.size()==17)
    {
        if(takingCardNum[0]=='3'||takingCardNum[0]=='4')
        {
            return 5;
        }
    }
    else{return 0;}
    //createCard(choice);
}

CreditCard* TakingCC::createCard(int c, string name,string num,string date)
{
    CreditCard* creditCard = nullptr;
    if (c == 1)
    {
        return creditCard = new AbstractMasterCC(name,num,date);
    } else if (c == 2)
    {
        return creditCard = new AbstractVisaCC(name,num,date);
    } else if (c == 3)
    {
        return creditCard = new AbstractAmExCC(name,num,date);
    } else if (c == 4)
    {
        return creditCard = new AbstractDiscoverCC(name,num,date);
    }
    else if (c == 5)
    {
        return creditCard = new LonLonCC(name,num,date);
    }else
    {
        return 0;
    }

}


