#include "PrioritizedTime.h"

PrioritizedTime::PrioritizedTime()
{
    //ctor
}

PrioritizedTime::~PrioritizedTime()
{
    //dtor
}
/*PrioritizedTime::PrioritizedTime(string newsubject, string newdescription, bool com, bool newrating ,int newday, int newmonth, int newyear)
{
    setsubject(newsubject);
    setdescription(newdescription);
    setcompletion(com);
    setrating(newrating);
    setday(newday);
    setmonth(newmonth);
    setyear(newyear);
}*/
PrioritizedTime::PrioritizedTime(string newsubject, string newdescription, bool com, bool newrating ,int newday, int newmonth, int newyear):
Task(newsubject, newdescription, com),PrioritiedTask(newrating), TimedTask(newday, newmonth, newyear)
{
    const int LONGMONTH[7] = {1,3,5,7,8,10,12};
    int feb = 2;
    if (newmonth >12)
    {
        string errmessage = "The month is out of range \n";
        throw (errmessage);
    }
    for (int x=0; x<7; x++)
    {
        if (newmonth == LONGMONTH[x]&& newday>31)
        {
            string errmessage = "Cannot be more than 31 days during these months\n";
            throw(errmessage);
        }
        else if (newmonth == feb && newday > 28)
        {
            string errmessage = "There can only be 28 days in February\n";
            throw (errmessage);
        }
        else if (newmonth != LONGMONTH[x]&& newday>30)
        {
            string errmessage = "Cannot be more than 30 days during these months\n";
            throw(errmessage);
        }
    }
    if (newyear < 2021)
    {
        string errmessage = "You cannot put a year that has already passed as your due date\n";
        throw(errmessage);
    }
}

void PrioritizedTime::doAction()
{

};
void PrioritizedTime::toString()
{
    cout <<"Here is the subject " <<getsubject();
    cout << "Here is the description "<< getdescription();
    cout << "Here is the completion status (0 means not done, 1 means done) "<< getcompletion();
    cout << "Here is the priority rating (1 means that it's important) "<< getrating();
    cout <<"Here is the day it's due "<< getday();
    cout << "Here is the month that it's due "<< getmonth();
    cout << "Here is the year that it's due "<< getyear();

}
