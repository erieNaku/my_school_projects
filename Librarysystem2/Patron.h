#ifndef PATRON_H
#define PATRON_H
#include <iostream>
#include <vector>
#include<string>
#include"Checkin.h"
#include"Checkout.h"
using namespace std;

class Patron
{
    public:
        Patron();
        virtual ~Patron();
        Patron(string, string);
        void setid(string);
        void setname(string);
        string getid(){return id;};
        string getname(){return name;};
        friend class Menu;
    protected:
    private:
        string id;
        string name;
        Booklist books;
};

#endif // PATRON_H
