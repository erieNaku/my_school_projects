#ifndef TASK_H
#define TASK_H
#include <string>
#include <iostream>
using namespace std;
class Task
{
    public:
        Task();
        Task(string, string);
        Task(string, string, bool);
        virtual ~Task();
        string getsubject(){return subject;};
        string getdescription(){return description;};
        bool getcompletion(){return completion;};
        void setsubject(string);
        void setdescription(string);
        void setcompletion(bool);
        virtual void doAction()=0;
        //virtual void toString();

    protected:

    private:
        string subject;
        string description;
        bool completion = false; //false is not finished; true is finished
};

#endif // TASK_H
