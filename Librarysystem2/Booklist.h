#ifndef BOOKLIST_H
#define BOOKLIST_H
#include <iostream>
#include <vector>
#include "Checkin.h"
#include "Checkout.h"
#include<string>
using namespace std;

class Booklist
{
    public:
        Booklist();
        Booklist(string);
        virtual ~Booklist();
        string getadd(){return addbook;};
        string getbook(){return book;};
        void setbook(string value){book = value;};
        string getbookout(){return bookout;};
        void setbookout(string newbook){bookout = newbook;};
    protected:

    private:
        string book;
        string addbook;
        string bookout;
        string bookin;
};

#endif // BOOKLIST_H
