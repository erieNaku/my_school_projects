#include "PrioritiedTask.h"

PrioritiedTask::PrioritiedTask()
{
    //ctor
}

PrioritiedTask::~PrioritiedTask()
{
    //dtor
}
PrioritiedTask::PrioritiedTask(bool newrating)
{
    rating = newrating;
}
PrioritiedTask::PrioritiedTask(string newsubject, string newdescription, bool com, bool newrating):Task(newsubject, newdescription,com)
{
    rating = newrating;
}
void PrioritiedTask :: doAction()
{

}
/*void PrioritiedTask::toString()
{
    cout <<"Here is the subject " <<getsubject();
    cout << "Here is the description "<< getdescription();
    cout << "Here is the completion status (0 means not done, 1 means done) "<< getcompletion();
    cout << "Here is the priority rating (1 means that it's important) "<< getrating();

}*/
