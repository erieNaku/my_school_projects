#ifndef NAVIGATION_H
#define NAVIGATION_H
#include <iostream>
#include "Navigation.h"
#include "Task.h"
#include "TimedTask.h"
#include"PrioritizedTime.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;
class Navigation
{
    public:
        Navigation();
        virtual ~Navigation();
        void insertTask();
        void insertPT();
        void insertPrior();
        void insertTime();
        //void actionFour();
        void displayAll();
        void marktime();
        void markPrior();
        void markPT();

        void updatetime();
        void updatePrior();
        void updatePT();
        void displayDone();
    protected:

    private:
        //vector <PrioritiedTask> prioritylist{{"Lit", "need to study", false, true}, {"Calculus","finish homework", false, true}};
        //vector <TimedTask> timelist{{"Writing", "finish essay", false, 1,2,2021},{"History", "study for test", false, 3,2,2021}};
        //vector<PrioritizedTime> priorTime{{"Writing", "finish essay", false, true, 1,2,2021}};
        vector <Task> tasklist;
        vector <PrioritiedTask> prioritylist;
        vector <TimedTask> timelist;
        vector<PrioritizedTime> priorTime;
        string sub, desc;

};

#endif // NAVIGATION_H
