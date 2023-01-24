#include <iostream>
#include "Menu.h"
#include "Patron.h"
#include<vector>
#include"Booklist.h"
#include"Patron.h"
#include<string>
using namespace std;

void something();
void choice();
void init();
Menu menu;
Patron patron;
Booklist booklist;

int main()
{

    choice();
    return 0;
}
void choice()
{
    int choice;
    do
    {
        string bookout, id;
        menu.displayOptions();
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
            case 1:
                {
                    cout << "Please enter the name of the book you would like out\n";
                    getline(cin, bookout);
                    cout << "Please enter your id to verify you\n";
                    cin>>id;
                    //menu.goingout(bookout);
                    menu.checkoutBook(bookout, id);
                    menu.printallCheckout();
                }
                break;
            case 2:
                {

                    string bookin, returnid;
                    cout << "Please enter your id\n";
                    cin>>returnid;
                    cout <<"Please enter the book that you took out\n";
                    cin.ignore();
                    getline(cin,bookin);
                    menu.checkinBook(bookin,returnid);
                }
                break;
            case 3:
                {
                    string book;
                    cout<<"Please type in the name of the book(case sensitive)\n";
                    getline(cin, book);
                    menu.addBooks(book);
                    menu.printAllBook();
                }
                break;
            case 4:
                {
                    string digit,name;
                    cout << "Enter 10 digits\n";
                    cin>> digit;
                    if (digit.length()!=10)
                    {
                        cout << "Please try again\n";
                        cin>>digit;
                    }
                    cout<< "Please enter name\n";
                    cin.ignore();
                    getline(cin,name);
                    menu.addPatron(digit, name);
                    menu.printallPatron();

                }
                break;
            case 5:
                {
                    menu.printAllBook();
                }
                break;
            case 6:
                {
                    menu.printallPatron();
                }
            case 7:
                {
                    menu.printallCheckout();
                }
        }
    }while(choice!=0);
    if (choice == 0)
    {
        cout << "Have a good day\n";
    }
}

