#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include "AmExCC.h"
#include "MasterCC.h"
#include "VisaCC.h"
#include "DiscoverCC.h"
#include "CreditCard.h"
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

class Client
{
    public:
        Client();
        //this is the heavy lifting of the abstract factory. This allows the appropriate subclass to be made for one the spot access
        CreditCard* makeCC(int choice)
        {
            CreditCard* card=nullptr;//this makes a pointer because abstract classes can't have instances, but can have pointers
            if(choice==1)
            {
                return card= new VisaCC();
            }
            else if (choice==2)
            {
                return card= new MasterCC();
            }
            else if(choice==3)
            {
                return card= new AmExCC();
            }
            else if(choice==4)
            {
                return card= new DiscoverCC();
            }
            else
            {
                throw "There is not card of this type";
            }

        }
        int determine(string);//this member function was supposed to determine the correct integer so that
        //it could be sent to the appropriate sub class. Regretfully, I could not get variable retrieval to work correctly making this
        //function useless.
        virtual ~Client();
        public:

    protected:

    private:
        string creditNum;
        string creditDate;
        string cardHolder;
};

#endif // CLIENT_H
