#include <iostream>
#include "Navigation.h"
#include "Task.h"
#include "PrioritiedTask.h"
#include "TimedTask.h"
#include "PrioritizedTime.h"
#include <vector>
#include <string>
using namespace std;
int main()
{
    Navigation nav;
    int choice;
    cout << "0: leave list\n"
    <<"1: add a prioritized timed task\n"
     <<"2: add a priority task\n"
     << "3: add a timed task\n"
     << "4: mark task as complete(0 means not finished 1 means finished)\n"
     << "5: display all task\n"
     <<"6: change contents on list\n"
     <<"7: display unfinished and finished tasks\n";
    cin >> choice;
    while (choice !=0)
    {
        switch(choice)
        {
            case 1:
                {
                    nav.insertPT();
                    break;
                }
            case 2:
                {
                    nav.insertPrior();
                    break;
                }
            case 3:
                {
                    nav.insertTime();
                    break;

                }
            case 4:
                {   int chose;
                    cout << "Enter the number to mark as complete\n";
                    cout << "1: mark a priority timed task as complete\n";
                    cout << "2: mark a priority task as complete\n";
                    cout <<"3: mark a timed task as complete\n";
                    cin >> chose;
                    switch(chose)
                    {
                        case 1:nav.markPT(); break;
                        case 2:nav.markPrior(); break;
                        case 3:nav.marktime(); break;
                        default:cout << "Not a choice\n";
                    }
                    break;
                }
            case 5:
                {
                    nav.displayAll();
                    break;
                }
            case 6:
                {
                    int chose;
                    cout << "Enter the number to update the specific task\n";
                    cout << "1: update priority timed task\n";
                    cout << "2: update priority task\n";
                    cout <<"3: update time task\n";
                    cin >> chose;
                    switch(chose)
                    {
                        case 1:nav.updatePT(); break;
                        case 2:nav.updatePrior(); break;
                        case 3:nav.updatetime(); break;
                        default:cout << "Not a choice\n";
                    }

                    break;
                }
            case 7:
                {
                    nav.displayDone();
                    break;
                }
        }
        cout << "0: leave list\n"
        <<"1: add a prioritized timed task\n"
        <<"2: add a priority task\n"
        << "3: add a timed task\n"
        << "4: mark task as complete(0 means not finished 1 means finished)\n"
        << "5: display all task\n"
        <<"6: change contents on list\n"
        <<"7: display unfinished and finished tasks\n";
        cin >> choice;
    }

    return 0;
}


