#include "Booklist.h"
#include <iostream>
#include "Checkout.h"
#include <string>
#include <fstream>
#include"Menu.h"
using namespace std;
Booklist::Booklist()
{
    Menu menu;
    menu.init();
}

Booklist::~Booklist()
{
    //dtor
}
Booklist::Booklist(string newbook)
{
    book = newbook;
}

