#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <typeinfo>
#include "TakingCC.hpp"

using namespace std;
TakingCC client;
void fileget();
static vector<CreditCard*>cc;
static int vsize=cc.size();
void display();
void directget();
void yourinfo();
void allinfo();
void paymentProcessing();

int main() {
    display();
    int choice;
    cin>>choice;
    do
    {
        switch(choice)
        {
        case 1:
            directget();
            break;
        case 2:
            fileget();
            break;
        case 3:
            //cout<<cc.size()<<endl;
            for(int x=0; x<cc.size();x++)
            {
                cout<<cc[x]->getname()<<endl;
                cout <<cc[x]->whereCard()<<endl;
            }
            break;
        case 4:
            yourinfo();
            break;
        case 5:
            allinfo();
            break;
        case 6:
            paymentProcessing();
            break;

        }
        display();
        cin>>choice;
    }while(choice!=0);
    return 0;
}
void display()
{
    cout<<"Welcome to the credit card system, please chose what you would like to do?"<<endl;
    cout<<"1) Manually add a credit card"<<endl;
    cout<<"2) Import list from a file"<<endl;
    cout<<"3) Check Credit Cards"<<endl;
    cout<<"4) Check you credit card information"<<endl;
    cout<<"5) Check all credit card numbers and dates"<<endl;
    cout<<"6) Check a specific credit card type's information"<<endl;
    cout<<"0) Exit"<<endl;
}
void allinfo()
{
    string input, password = "cornbeef";
    cout<<"Authorization is required, please input admin password."<<endl;
    cin>>input;
    if(input ==password)
    {
        for(int x=0; x<cc.size();x++)
        {
            cout<<"Name: "<< cc[x]->getname()<<endl;
            cout<<"Card Number: "<<cc[x]->getnum() <<endl;
            cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
            cout<<"Credit card type: "<<cc[x]->whereCard()<<endl;
            cout<<"________________________________________"<<endl;
        }
    }
    else
    {
        cout<<"Wrong password."<<endl;
    }

}
void paymentProcessing()
{
    string input, password = "cornbeef";
    int choice;
    cout<<"Authorization is required, please input admin password."<<endl;
    cin>>input;
    if(input !=password)
    {
        cout<<"Wrong password"<<endl;
        return;
    }
    cout<<"Chose the type of credit cards you want to check"<<endl;
    cout<<"1) Master"<<endl;
    cout<<"2) Visa"<<endl;
    cout<<"3) American Express"<<endl;
    cout<<"4) Discover"<<endl;
    cout<<"5) Lonlon"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        for(int x= 0; x<cc.size(); x++)
        {
            if(client.determineType(cc[x]->getnum())==1)
            {
                cout<<"Name: "<< cc[x]->getname()<<endl;
                cout<<"Card Number: "<<cc[x]->getnum() <<endl;
                cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
                cout<<"________________________________________"<<endl;
            }
        }
        break;
    case 2:
        for(int x= 0; x<cc.size(); x++)
        {
            if(client.determineType(cc[x]->getnum())==2)
            {
                cout<<"Name: "<< cc[x]->getname()<<endl;
                cout<<"Card Number: "<<cc[x]->getnum() <<endl;
                cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
                cout<<"Credit card type: "<<cc[x]->whereCard()<<endl;
                cout<<"________________________________________"<<endl;
            }
        }
        break;
    case 3:
        for(int x= 0; x<cc.size(); x++)
        {
            if(client.determineType(cc[x]->getnum())==3)
            {
                cout<<"Name: "<< cc[x]->getname()<<endl;
                cout<<"Card Number: "<<cc[x]->getnum() <<endl;
                cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
                cout<<"Credit card type: "<<cc[x]->whereCard()<<endl;
                cout<<"________________________________________"<<endl;
            }
        }
        break;
    case 4:
        for(int x= 0; x<cc.size(); x++)
        {
            if(client.determineType(cc[x]->getnum())==4)
            {
                cout<<"Name: "<< cc[x]->getname()<<endl;
                cout<<"Card Number: "<<cc[x]->getnum() <<endl;
                cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
                cout<<"Credit card type: "<<cc[x]->whereCard()<<endl;
                cout<<"________________________________________"<<endl;

            }
        }
        break;
    case 5:
        for(int x= 0; x<cc.size(); x++)
        {
            if(client.determineType(cc[x]->getnum())==5)
            {
                cout<<"Name: "<< cc[x]->getname()<<endl;
                cout<<"Card Number: "<<cc[x]->getnum() <<endl;
                cout<<"Expiration date: "<<cc[x]->getdate() <<endl;
                cout<<"Credit card type: "<<cc[x]->whereCard()<<endl;
                cout<<"________________________________________"<<endl;

            }
        }
        break;
    }

}
void yourinfo()
{
    string num;
    int placeholder=0;
    bool valid=false;
    cout<<"Before we can continue please provide your number"<<endl;
    cin>>num;
    for(int x=0; x<cc.size();x++)
    {
        if(cc[x]->getnum()==num)
        {
            valid=true;
            placeholder=x;
            break;
        }

    }
    if(valid=true)
    {
        cout<<"Here is your information:"<<endl;
        cout<<"Name: "<< cc[placeholder]->getname()<<endl;
        cout<<"Card Number: "<<cc[placeholder]->getnum() <<endl;
        cout<<"Expiration date: "<<cc[placeholder]->getdate() <<endl;
        cout<<"Credit card type: "<<cc[placeholder]->whereCard()<<endl;
    }
    else
    {
        cout<<"That is not a valid number, therefore you cannot access anything"<<endl;
    }
}
void directget()
{
    string name,num,date;
    cout<<"Please enter a name\n";
    cin.ignore();
    getline(cin,name);
    cout<<"Please enter a number\n";
    getline(cin,num);
    cout<<"Please enter a date of expiration with the format of MM/YYYY"<<endl;
    cout<<"Be aware invalid formats will not be accepted in any manner"<<endl;
    getline(cin,date);
    for(int x=0;x<num.size();x++)
    {
        while(!(std::isdigit(num[x])))
        {
            cout<<"Sorry but there seems to be characters other than letters for your card number, please try again"<<endl;
            getline(cin,num);
        }
    }
    if(!(std::isdigit(date[0]))|| !(std::isdigit(date[1])))
    {
        cout<<"Sorry but there seems to be an invalid character somewhere in your input for date"<<endl;
            return;
    }
    if(!(std::isdigit(date[3]))|| !(std::isdigit(date[4]))||!(std::isdigit(date[5]))||!(std::isdigit(date[6])))
    {
        cout<<"Sorry but there seems to be an invalid character somewhere in your date"<<endl;
        return;
    }
    if(client.determineType(num)==0)
        {
            cout<<"Sorry but "<<name<<" is not of a credit card type, therefore it shall not be put in the system."<<endl;
            return;
        }
    cout<<"Congratulations on being entered into the system "<<name<<endl;
    cc.push_back(client.createCard(client.determineType(num),name,num,date));
    //cout<<cc[newsize]->getname()<<endl;
}
void fileget()
{
    //vector<string>saveFiles;
    string num,name,date;
    int choice;
    string temp,temp2;
    ifstream inputfile;
    string file;
    cout <<"Please enter a file name(be sure to add the type of file at the end).";
    cin>>file;
    inputfile.open(file);
    if(!(inputfile))
    {
        cout<<"That is not a legitimate file, please try again."<<endl;
        inputfile.close();
        return;

    }
    //inputfile.open("CreditCardData.txt");
    while(!inputfile.eof())
    {
        getline(inputfile, temp, '\n');
        std::istringstream iss(temp);
        getline(iss,name,'\t');
        getline(iss,num,'\t');
        getline(iss,date,'\t');
        bool badchara=false;
        for(int x=0;x<num.size();x++)
        {
            if(!(std::isdigit(num[x])))
            {
                badchara=true;
            }
        }
        if(badchara==true)
        {
            cout<<"Sorry but there where bad characters in the input therefore "<<name<<" shall not be put in"<<endl;
                continue;
        }
        if(!(std::isdigit(date[0]))|| !(std::isdigit(date[1])))
        {
            cout<<"Sorry but there was an invalid character somewhere in your input for date therefore "<<name<<" shall not be put in"<<endl;
                continue;
        }
        if(!(std::isdigit(date[3]))|| !(std::isdigit(date[4]))||!(std::isdigit(date[5]))||!(std::isdigit(date[6])))
        {
            cout<<"Sorry but there was an invalid character somewhere in your input for date therefore "<<name<<" shall not be put in"<<endl;
            continue;
        }
        if(client.determineType(num)==0)
        {
            cout<<"Sorry but "<<name<<" is not of a credit card type, therefore it shall not be put in the system."<<endl;
            continue;
        }
        cc.push_back(client.createCard(client.determineType(num),name,num,date));
    }
    inputfile.close();
}

