#ifndef TIMEDTASK_H
#define TIMEDTASK_H
#include "Task.h"
#include <iostream>
using namespace std;
class TimedTask: virtual public Task
{
    public:
        TimedTask();
        TimedTask(int, int, int);
        TimedTask(string, string, bool, int, int, int);
        //getters and setters
        int getday(){return day;};
        int getmonth(){return month;};
        int getyear(){return year;};
        void setday(int newday){day = newday;};
        void setmonth(int newmonth){month = newmonth;};
        void setyear(int newyear){year = newyear;};
        virtual void doAction();
        virtual void toString();
        //fcns

        virtual ~TimedTask();

    protected:

    private:
        int day;
        int month;
        int year;
};

#endif // TIMEDTASK_H
