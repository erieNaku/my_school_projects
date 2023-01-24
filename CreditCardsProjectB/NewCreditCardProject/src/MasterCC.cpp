#include "MasterCC.h"

MasterCC::MasterCC()
{
    creditNum="0000000000000000";
    cardHolder="John Smith";
    creditDate="1/2022";
}

MasterCC::~MasterCC()
{
    //dtor
}
void MasterCC:: createCredit()
{
    cout<<"You created a Master's credit card!\n"<<endl;
}
MasterCC::MasterCC(string name,string num,string date)
{
    creditNum=num;
    cardHolder=name;
    creditDate=date;

}
