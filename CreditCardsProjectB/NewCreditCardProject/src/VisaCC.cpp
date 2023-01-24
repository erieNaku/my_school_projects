#include "VisaCC.h"

VisaCC::VisaCC()
{
    creditNum="0000000000000000";
    cardHolder="John Smith";
    creditDate="1/2022";
}

VisaCC::~VisaCC()
{
    //dtor
}
void VisaCC::createCredit()
{
    cout<<"You created a Visa credit card!"<<endl;
}
VisaCC::VisaCC(string name,string num,string date)
{
    creditNum=num;
    cardHolder=name;
    creditDate=date;

}
