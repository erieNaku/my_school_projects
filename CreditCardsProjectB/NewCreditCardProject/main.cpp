#include <iostream>
#include "CreditCard.h"
#include "AmExCC.h"
#include "MasterCC.h"
#include "VisaCC.h"
#include "DiscoverCC.h"
#include "Client.h"
#include<cctype>
#include<fstream>
#include<vector>
#include<sstream>
#include<string>
#include<iomanip>
using namespace std;


int main()
{
    vector<string> vname;//container to hold information to populate the class
    vector<string> vdate;//container to hold information to populate the class
    vector<string> vnum;//container to hold information to populate the class

    Client myClient;
    vector<CreditCard*>diffCards;//its class credit card cas it takes the creditcard pointer from client(dont get confused)
    string temp, name, num, date;//these are the variables that I used for containers for getting information into the class
    int choice=0;//the choice is a container to retrieve information and to be overwritten


    ifstream creditFiles;
    creditFiles.open("CreditCardData.dat",ios::in);
    if(!(creditFiles))
    {
        cout<<"Failed to open";
    }
    while(getline(creditFiles,temp,'\n')){
        std::istringstream iss(temp);//this is to grab the getline string
        getline(iss,name,'\t');
        getline(iss,num,'\t');
        getline(iss,date,'\t');
        try {   // your trying to see if it works, if not the catch will catch the message
            choice=myClient.determine(num);//this function is given a number based off of the requirements that each credit card has
        }catch (const char* message) { // Catches the message
            cout << message << endl; // Outputs error message
            delete &choice;
            continue;
        }
        diffCards.push_back(myClient.makeCC(choice));
        //cout<<choice<<endl;
        vname.push_back(name);
        vnum.push_back(num);
        vdate.push_back(date);
    }
    creditFiles.close();
    //cout<<diffCards.size()<<endl;
    for(int x=0; x<diffCards.size();x++)
    {
        diffCards[x]->createCredit();
        diffCards[x]->setname(vname[x]);
        diffCards[x]->setdate(vdate[x]);
        diffCards[x]->setnum(vnum[x]);
        cout<<diffCards[x]->getname()<<endl<<diffCards[x]->getdate()<<endl<<diffCards[x]->getnum()<<endl;
    }
    for(int x=0; x<diffCards.size();x++)
    {
        delete diffCards[x];
    }

    return 0;
}
