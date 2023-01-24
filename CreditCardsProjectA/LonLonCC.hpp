#ifndef LONLONCC_HPP
#define LONLONCC_HPP
#include <stdio.h>
#include <string>
#include "CreditCard.hpp"
using namespace std;

class LonLonCC: public CreditCard
{
    public:
        LonLonCC(string,string,string);
        string whereCard(){return "This card is a Lonlon card";}
        virtual ~LonLonCC();
        //LonLonCC();
        void intake(string,string,string);
        static bool valid(string);
        void setLonLonCCCardHolder(string);
        void setLonLonCCCardNum(string);
        void setLonLonCCExDate(string);
        string getname(){return LonLonCCCardHolder;};
        string getnum(){return LonLonCCCardNum;};
        string getdate(){return LonLonCCExDate;};
    protected:

    private:
        string LonLonCCCardHolder;
        string LonLonCCCardNum;
        string LonLonCCExDate;
};

#endif // LONLONCC_HPP
