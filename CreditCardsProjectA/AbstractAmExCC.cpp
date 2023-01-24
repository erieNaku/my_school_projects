


#include "AbstractAmExCC.hpp"
AbstractAmExCC::AbstractAmExCC(string name,string num,string date)
{
    absAmExCardHolder=name;
    absAmExCardNum=num;
    absAmExExpDate=date;
}

void AbstractAmExCC::intake(string name,string num,string date)
{
    absAmExCardHolder=name;
    absAmExCardNum=num;
    absAmExExpDate=date;
}

void AbstractAmExCC::setAbsAmExCardHolder(string h)
{
    absAmExCardHolder = h;
}

void AbstractAmExCC::setAbsAmExCardNum(string c)
{
    absAmExCardNum = c;
}

void AbstractAmExCC::setAbsAmExExpDate(string e)
{
    absAmExExpDate = e;
}
