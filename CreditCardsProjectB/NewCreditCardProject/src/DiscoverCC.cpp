#include "DiscoverCC.h"

DiscoverCC::DiscoverCC()
{
    creditNum="0000000000000000";
    cardHolder="John Smith";
    creditDate="1/2022";
}

DiscoverCC::~DiscoverCC()
{
    //dtor
}
void DiscoverCC:: createCredit()
{
    cout<<"You made a Discover card\n";
}
DiscoverCC::DiscoverCC(string name,string num,string date)
{
    creditNum=num;
    cardHolder=name;
    creditDate=date;

}
