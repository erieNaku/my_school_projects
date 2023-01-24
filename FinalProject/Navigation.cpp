#include "Navigation.h"

vector <PrioritiedTask> prioritylist;
vector <TimedTask> timelist;
vector<PrioritizedTime> priorTime;
Navigation::Navigation()
{
    //ctor
}

Navigation::~Navigation()
{
    //dtor
}
void Navigation::insertTask()
{
    cout << "Please input subject of your task(no more than 50 characters\n";
    cin.ignore();
    getline(cin,sub);
    while(sub.size()>50)
    {
        cout << "To many character, please try again\n";
        getline(cin,sub);
    }
    cout << "Please input description\n";
    getline(cin, desc);
}
void Navigation::insertPT()
{
    insertTask();
    int dueday, duemonth, dueyear;
    cout << "input the day\n";
    cin >> dueday;
    cout << "input the month\n";
    cin >> duemonth;
    cout << "input the year\n";
    cin >> dueyear;
    try
    {
        PrioritizedTime pTime(sub, desc, false, true, dueday, duemonth, dueyear);
        priorTime.push_back(pTime);
        cout << "Marked as a priority and input the date\n";
    }
    catch(string err)
    {
        cout << err;
    }
}
void Navigation::insertPrior()
{
    insertTask();
    PrioritiedTask prior(sub, desc, false, true);
    cout << "Marked as a priority\n";
    prioritylist.push_back(prior);
}
void Navigation:: insertTime()
{
    insertTask();
    int dueday, duemonth, dueyear;
    cout << "input the day\n";
    cin >> dueday;
    cout << "input the month\n";
    cin >> duemonth;
    cout << "input the year\n";
    cin >> dueyear;
    try
    {
        TimedTask task(sub, desc, false, dueday, duemonth, dueyear);
        timelist.push_back(task);
    }
    catch(string err)
    {
        cout << err;
    }

}
void Navigation::updatetime()
{
    int mark, pick, newday, newmonth, newyear;
    string newS, newD;
    bool newc;
    cout << "Enter the number of the one you want to update(number next to checklist item)\n";
    cin>> mark;
    cout << "Enter what you want updated\n";
    cout << "1: change completion status\n"
    <<"2: change subject\n"
    <<"3: change description\n"
    <<"4: change date\n";
    cin>>pick;
    switch(pick)
    {
        case 1:
            {
                cout << "Enter the new completion status (0 for false 1 for true)\n";
                cin >> newc;
                for(int x = 0; x < timelist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        timelist.at(x).setcompletion(newc);
                    }
                }
                 break;
            }
        case 2:
            {
                cout << "Enter the new subject\n";
                cin >> newS;
                for(int x = 0; x < timelist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        timelist.at(x).setsubject(newS);
                    }
                }
                 break;

            }
        case 3:
            {
                cout << "Enter the new description";
                cin >> newD;
                for(int x = 0; x < timelist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        timelist.at(x).setdescription(newS);
                    }
                }
                 break;
            }
        case 4:
            {
                cout << "Enter the new day";
                cin >> newday;
                cout << "Enter the new month";
                cin >> newmonth;
                cout << "Enter the new year";
                cin >> newyear;
                for(int x = 0; x < timelist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        timelist.at(x).setday(newday);
                        timelist.at(x).setmonth(newmonth);
                        timelist.at(x).setyear(newyear);
                    }
                }
                 break;
            }
    }

}
void Navigation::updatePrior()
{
    int mark, pick;
    string newS, newD;
    bool newc, newr;
    cout << "Enter the number of the one you want to update(number next to checklist item)\n";
    cin>> mark;
    cout << "Enter what you want updated\n";
    cout << "1: change completion status\n"
    <<"2: change subject\n"
    <<"3: change description\n"
    <<"4: change priority rating\n";
    cin>>pick;
    switch(pick)
    {
        case 1:
            {
                cout << "Enter the new completion status (0 for false 1 for true)\n";
                cin >> newc;
                for(int x = 0; x < prioritylist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        prioritylist.at(x).setcompletion(newc);
                    }
                }
                 break;
            }
        case 2:
            {
                cout << "Enter the new subject\n";
                cin >> newS;
                for(int x = 0; x < prioritylist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        prioritylist.at(x).setsubject(newS);
                    }
                }
                 break;

            }
        case 3:
            {
                cout << "Enter the new description";
                cin >> newD;
                for(int x = 0; x < prioritylist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        prioritylist.at(x).setdescription(newS);
                    }
                }
                 break;
            }
        case 4:
            {
                for(int x = 0; x < prioritylist.size(); x++)
                {
                    if (x == mark-1)
                    {
                        prioritylist.at(x).setrating(newr);
                    }
                }
            }
    }

}
void Navigation::updatePT()
{
    int mark, pick, newday, newmonth, newyear;
    string newS, newD;
    bool newc, newr;
    cout << "Enter the number of the one you want to update(number next to checklist item)\n";
    cin>> mark;
    cout << "Enter what you want updated\n";
    cout << "1: change completion status\n"
    <<"2: change subject\n"
    <<"3: change description\n"
    <<"4: change date\n"
    <<"5: change priority rating\n";
    cin>>pick;
    switch(pick)
    {
        case 1:
            {
                cout << "Enter the new completion status (0 for false 1 for true)\n";
                cin >> newc;
                for(int x = 0; x < priorTime.size(); x++)
                {
                    if (x == mark-1)
                    {
                        priorTime.at(x).setcompletion(newc);
                    }
                }
                 break;
            }
        case 2:
            {
                cout << "Enter the new subject\n";
                cin >> newS;
                for(int x = 0; x < priorTime.size(); x++)
                {
                    if (x == mark-1)
                    {
                        priorTime.at(x).setsubject(newS);
                    }
                }
                 break;

            }
        case 3:
            {
                cout << "Enter the new description";
                cin >> newD;
                for(int x = 0; x < priorTime.size(); x++)
                {
                    if (x == mark-1)
                    {
                        priorTime.at(x).setdescription(newS);
                    }
                }
                 break;
            }
        case 4:
            {
                cout << "Enter the new day";
                cin >> newday;
                cout << "Enter the new month";
                cin >> newmonth;
                cout << "Enter the new year";
                cin >> newyear;
                for(int x = 0; x < priorTime.size(); x++)
                {
                    if (x == mark-1)
                    {
                        priorTime.at(x).setday(newday);
                        priorTime.at(x).setmonth(newmonth);
                        priorTime.at(x).setyear(newyear);
                    }
                }
                 break;
            }
        case 5:
            {
                for(int x = 0; x < priorTime.size(); x++)
                {
                    if (x == mark-1)
                    {
                        priorTime.at(x).setrating(newr);
                    }
                }
            }
    }

}
void Navigation::markPrior()
{
    int mark;
    cout << "Enter the number of the task you want to mark as complete\n";
    cin>> mark;
    for(int x = 0; x < prioritylist.size(); x++)
    {
        if (x == mark-1)
        {
            prioritylist.at(x).setcompletion(true);
        }
    }
}
void Navigation::marktime()
{
    int mark;
    cout << "Enter the number of the task you want to mark as complete\n";
    cin>> mark;
    for(int x = 0; x < timelist.size(); x++)
    {
        if (x == mark-1)
        {
            timelist.at(x).setcompletion(true);
        }
    }
}
void Navigation::markPT()
{
    int mark;
    cout << "Enter the number of the task you want to mark as complete\n";
    cin>> mark;
    for(int x = 0; x < priorTime.size(); x++)
    {
        if (x == mark-1)
        {
            priorTime.at(x).setcompletion(true);
        }
    }

}
void Navigation::displayAll()
{
    for(int index = 0; index < prioritylist.size(); index++)
  {
      cout << (index +1) << "\t" << prioritylist.at(index).getsubject()
           << "\t" <<prioritylist.at(index).getdescription()<<
           "\t"<<prioritylist.at(index).getrating()<< endl;
  }
  for(int index = 0; index < timelist.size(); index++)
    {
        cout << (index +1) << "\t" << timelist.at(index).getsubject()
           << "\t" <<timelist.at(index).getdescription()<<
           "\t"<<timelist.at(index).getday()<<"/"<<timelist.at(index).getmonth()<<"/"<<timelist.at(index).getyear()<< endl;
    }
    for(int index = 0; index < priorTime.size(); index++)
    {
        cout << (index +1) << "\t" << priorTime.at(index).getsubject()
           << "\t" <<priorTime.at(index).getdescription()<<
           "\t"<<priorTime.at(index).getday()<<"/"<<priorTime.at(index).getmonth()<<"/"<<priorTime.at(index).getyear()<< endl;
    }

}
void Navigation :: displayDone()
{
    cout <<"Priority list\n";
    for(int x = 0; x < prioritylist.size(); x++)
    {
        if (prioritylist.at(x).getcompletion() == 0)
        {
            cout <<(x+1)<< " Unfinished task: "<< prioritylist.at(x).getsubject()<<"\t" <<prioritylist.at(x).getdescription()<<
           "\t" << endl;
        }
        if (prioritylist.at(x).getcompletion() == 1)
        {
            cout <<(x+1)<< " finished task: "<< prioritylist.at(x).getsubject()<<"\t" <<prioritylist.at(x).getdescription()<<
           "\t"<< endl;
        }
    }
    cout << "Timed task list\n";
    for(int x = 0; x < timelist.size(); x++)
    {
        if (timelist.at(x).getcompletion() == 0)
        {
            cout <<(x+1)<< " Unfinished task: "<< timelist.at(x).getsubject()<<"\t" <<timelist.at(x).getdescription()<<
           "\t"<<timelist.at(x).getday()<<"/"<<timelist.at(x).getmonth()<<"/"<<timelist.at(x).getyear()<< endl;
        }
        if (timelist.at(x).getcompletion() == 1)
        {
            cout << (x+1)<< " finished task: "<< timelist.at(x).getsubject()<<"\t" <<timelist.at(x).getdescription()<<
           "\t"<<timelist.at(x).getday()<<"/"<<timelist.at(x).getmonth()<<"/"<<timelist.at(x).getyear()<< endl;
        }
    }
    cout << "Prioritized Time list\n";
    for(int index = 0; index < priorTime.size(); index++)
    {
        if (priorTime.at(index).getcompletion() == 0)
        {
            cout << (index +1) <<" Unfinished task: "<< "\t" << priorTime.at(index).getsubject()
           << "\t" <<priorTime.at(index).getdescription()<<
           "\t"<<priorTime.at(index).getday()<<"/"<<priorTime.at(index).getmonth()<<"/"<<priorTime.at(index).getyear()<< endl;
        }
        if (priorTime.at(index).getcompletion() == 1)
        {
            cout << (index +1) << " finished task: "<<"\t" << priorTime.at(index).getsubject()
           << "\t" <<priorTime.at(index).getdescription()<<
           "\t"<<priorTime.at(index).getday()<<"/"<<priorTime.at(index).getmonth()<<"/"<<priorTime.at(index).getyear()<< endl;
        }
    }
}
