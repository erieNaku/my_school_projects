#ifndef PRIORITIEDTASK_H
#define PRIORITIEDTASK_H
#include "Task.h"
#include <iostream>
using namespace std;
class PrioritiedTask: virtual public Task
{
    public:
        PrioritiedTask();
        PrioritiedTask(bool);
        PrioritiedTask(string, string, bool, bool);
        virtual ~PrioritiedTask();
        bool getrating(){return rating;};
        void setrating(bool newrating){rating = newrating;};
        virtual void doAction();
    protected:

    private:
        bool rating = false;// false if not urgent, true if it is urgent
};

#endif // PRIORITIEDTASK_H
