#include "Patron.h"
#include <iostream>
#include<vector>
#include "Menu.h"
#include<fstream>
#include<string>
using namespace std;
Patron::Patron()
{
    Menu menu;
    menu.init();
}

Patron::Patron(string newid, string newname)
{
    id = newid;
    name = newname;
}
Patron::~Patron()
{
    //dtor
}

void Patron::setid(string value)
{
    id = value;
}
void Patron::setname(string value)
{
    name = value;
}
