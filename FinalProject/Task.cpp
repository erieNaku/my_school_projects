#include "Task.h"
Task::Task()
{
    //ctor
}
Task::Task(string newsub, string newdesc)
{
    subject = newsub;
    description = newdesc;
}
Task::Task(string newsub, string newdesc, bool newcomplete)
{
    subject = newsub;
    description = newdesc;
    completion = newcomplete;
}

Task::~Task()
{
    //dtor
}
void Task:: setsubject(string newsub)
{
    subject = newsub;
}
void Task:: setdescription(string newdescription)
{
    description = newdescription;
}
void Task::setcompletion(bool newcompletion)
{
    completion = newcompletion;
}
/*void Task::toString()
{
    cout <<"Here is the subject " <<getsubject();
    cout << "Here is the description "<< getdescription();
    cout << "Here is the completion status (0 means not done, 1 means done) "<< getcompletion();

}
*/
