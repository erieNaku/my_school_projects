#include "AmExCC.h"

AmExCC::AmExCC()
{
    creditNum="0000000000000000";
    cardHolder="John Smith";
    creditDate="1/2022";

}

AmExCC::~AmExCC()
{
    //dtor
}
void AmExCC:: createCredit()
{
    cout<<"You created an American Express credit card\n";
}

AmExCC::AmExCC(string name,string num,string date)
{
    creditNum=num;
    cardHolder=name;
    creditDate=date;

}
