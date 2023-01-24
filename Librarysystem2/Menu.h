#ifndef MENU_H
#define MENU_H
#include <iostream>
#include"Patron.h"
#include "Checkout.h"
#include "Checkin.h"
#include "Patron.h"
#include "Booklist.h"
#include <stdlib.h>
#include<string>
using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void displayOptions();
        void addBooks(string newBook);
        void addPatron(string, string);
        void checkoutBook(string, string);
        void checkinBook(string ,string);
        void goingout(string gettingout);
        void printAllBook();
        void printallCheckout();
        void printallPatron();
        void init();
    protected:

    private:
        vector<Booklist> allBooks;
        vector<Patron>allpatron;
        vector<Patron>idout;
        vector<Booklist>bookout;
};

#endif // MENU_H
