#include "Client.h"

Client::~Client()
{
    //dtor
}
Client::Client()
{
}
//this member function was supposed to determine the correct integer so that
//it could be sent to the appropriate sub class. Regretfully, I could not get variable retrieval to work correctly making this
//function useless.
int Client::determine(string ccNum)
{
    if(ccNum.size()>19)
    {
        throw "1 or more cards is invalid, therefore it has been terminated";
    }
    if(ccNum.size()==16)
    {
        if(ccNum[0]=='5')
        {
            int digitTemp=static_cast<int>(ccNum[1]);//this is just used for this if function below. I thought it would be better than just using a
            //bunch of or functions
            if(digitTemp<=5||digitTemp>=1)
            {
                return 1;
            }
        }
        else if(ccNum[0]=='6' && ccNum[1]=='0' &&ccNum[2]=='1' &&ccNum[3]=='1'){
            return 4;
        }
    }
    if(ccNum.size()==16 || ccNum.size()==13)
    {
        if(ccNum[0]=='4')
        {
            return 2;
        }

    }
    if(ccNum.size()==15)
    {
        if(ccNum[0]=='3')
        {
            if(ccNum[1]=='4' ||ccNum[1]=='7')
            {
                return 3;
            }
        }

    }
    throw "1 or more cards is invalid, therefore it has been terminated";
}
