#ifndef PRIORITIZEDTIME_H
#define PRIORITIZEDTIME_H
#include "TimedTask.h"
#include "PrioritiedTask.h"
#include "Task.h"
#include<iostream>


class PrioritizedTime: virtual public TimedTask, virtual public PrioritiedTask
{
    public:
        PrioritizedTime();
        PrioritizedTime(string,string,bool,bool,int,int,int);
        //void obtaincom(bool);
        virtual ~PrioritizedTime();
        virtual void doAction();
        virtual void toString();

    protected:

    private:
};

#endif // PRIORITIZEDTIME_H
