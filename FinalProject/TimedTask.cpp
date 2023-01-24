#include "TimedTask.h"
TimedTask::TimedTask()
{
    day = 0;
    month = 0;
    year = 0;
}

TimedTask::~TimedTask()
{
    //dtor
}
TimedTask::TimedTask(int newday, int newmonth, int newyear)
{
    day = newday;
    month = newmonth;
    year = newyear;
}
TimedTask::TimedTask(string newsubject, string newdescription, bool com, int newday, int newmonth, int newyear):Task(newsubject, newdescription,com)
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
    day = newday;
    month = newmonth;
    year = newyear;
}
void TimedTask::doAction()
{
    //cout << day<< "/"<<month<<"/"<< year<< endl;

}
void TimedTask::toString()
{
    cout <<"Here is the subject " <<getsubject();
    cout << "Here is the description "<< getdescription();
    cout << "Here is the completion status (0 means not done, 1 means done) "<< getcompletion();
    cout <<"Here is the day it's due "<< getday();
    cout << "Here is the month that it's due "<< getmonth();
    cout << "Here is the year that it's due "<< getyear();

}

