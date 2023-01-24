#include "LonLonCC.hpp"


LonLonCC::~LonLonCC()
{
    //dtor
}

/*LonLonCC::LonLonCC()
{
    //cout<<"Im in LonLon";
}*/

LonLonCC::LonLonCC(string name,string num,string date)
{
    LonLonCCCardHolder = name;
    LonLonCCCardNum = num;
    LonLonCCExDate = date;
}

void LonLonCC::intake(string name,string num,string date)
{
    LonLonCCCardHolder = name;
    LonLonCCCardNum = num;
    LonLonCCExDate = date;
    //cout <<"I'm in visa!";
}

void LonLonCC::setLonLonCCCardHolder(string h)
{
    LonLonCCCardHolder = h;
}

void LonLonCC::setLonLonCCCardNum(string c)
{
    LonLonCCCardNum = c;
}

void LonLonCC::setLonLonCCExDate(string e)
{
    LonLonCCExDate = e;
}
