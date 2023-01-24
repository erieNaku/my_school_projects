#include "Menu.h"
#include <iostream>

#include "Patron.h"
#include "Booklist.h"
#include <stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
Menu::Menu()
{
    init();
}

Menu::~Menu()
{
    //dtor
}

void Menu:: displayOptions()
{
    cout << "Please type in the number that goes with the action you wish to do" << endl;
    cout << "1: check out a book\n";
    cout <<"2: check in a book\n";
    cout << "3: add a book to our collection\n";
    cout << "4: become a patron\n";
    cout <<"5: show books\n";
    cout << "6: See all patrons\n";
    cout <<"7: See all checkout\n";
    cout << "0: quit\n";
}
void Menu::addBooks(string newBook)
{
    Booklist booklist(newBook);
    allBooks.push_back(booklist);

}
void Menu::goingout(string gettingout)
{
    Booklist checkout;
    checkout.setbookout(gettingout);
    bookout.push_back(checkout);

}

void Menu::addPatron(string digit, string name)
{
    Patron patron(digit, name);
    allpatron.push_back(patron);
}
void Menu::printAllBook()
{
  for(int index = 0; index < allBooks.size(); index++)
  {
      cout << (index +1) << "\t" << allBooks.at(index).getbook()
           << "\t" << endl;
  }
}
void Menu:: printallPatron()
{
    for(int index = 0; index < allpatron.size(); index++)
  {
      cout << (index +1) << "\t" << allpatron.at(index).getid()
           << "\t" <<allpatron.at(index).getname()<< endl;
  }
}

void Menu:: printallCheckout()
{
    cout << "Checked out books\n";
    for(int index = 0; index < bookout.size(); index++)
  {
      cout << (index +1) << "\t" <<bookout.at(index).getbookout()<< endl;
  }
}

void Menu::checkoutBook(string bookname, string patronid)
  {
      for (int index = 0; index < allpatron.size(); index++)
      {
          if (allpatron.at(index).getid() == patronid)
          {
              for(int x = 0; x < allBooks.size(); x++)
              {
                  if (allBooks.at(x).getbook() == bookname)
                  {
                      allBooks.erase(allBooks.begin()+x);
                      goingout(bookname);
                      cout << "checked out!" << endl;
                      return;
                  }
              }
              cout << "No Book was found with this name" << endl;
              return;
          }
      }
      cout << "No patron found with this ID" << endl;

  }
  void Menu::checkinBook(string bookname,string patronid)
  {
      for (int index = 0; index < allpatron.size(); index++)
      {
          if (allpatron.at(index).getid() == patronid)
          {
              for(int x = 0; x < bookout.size(); x++)
              {
                  if (bookout.at(x).getbookout() == bookname)
                  {
                      bookout.erase(bookout.begin()+x);
                      allBooks.push_back(bookname);
                      cout << "checked in!" << endl;
                      return;
                  }
              }
              cout << "No Book was found with this name" << endl;
              return;
          }
      }
      cout << "No patron found with this ID" << endl;

  }

void Menu::init()
{
    addBooks("The Book Thief");
    addBooks("Life of Pi");
    addBooks("Water for Elaphants");
    addBooks("The Art of Racing in the Rain");
    addBooks("Extremely Loud & Incredibly Close");
    addBooks("The Glass Castle");
    addBooks("Hush, Hush");


}

