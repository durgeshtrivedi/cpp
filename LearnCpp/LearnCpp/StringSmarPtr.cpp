//
//  StringSmarPtr.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 19/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "StringSmarPtr.hpp"
#include <memory.h>
#include <string.h>
#include <iostream>
using namespace std;
void remove(string &nm);

void remove1(string &nm);
class Report
{
    string str;
    
private:
    
    
    public :
    
    void comment() {cout << "Print the value of " <<str << endl;};
    Report(){};
    Report(const string s) : str(s)
    { cout << "Object created!\n"; }
    Report(const char* s) : str(s)
    { cout << "Object created!\n"; }
    ~Report() { std::cout << "Object deleted!\n"; }
};


int main121()

{
    
    string name("Hello");
    
    remove(name);
    
    auto_ptr<Report>  myreprot(new Report("what is the value"));
    
    myreprot->comment();
    
    shared_ptr<Report> myshare(new Report("What is shared value"));
    
    myshare->comment();
    
    unique_ptr<Report> myunique(new Report("myUinque vlaue"));
    
    myunique->comment();
    
    
    Report *newreport = new Report("This is me");
   // myshare = newreport; not possible
    
    myshare = shared_ptr<Report>(newreport);
    
   // myshare = myunique;
    return 0;
}


void remove(string &nm)
{
    string *newnm = new string("hello word");
    
    nm = *newnm;
    return;
}
void remove1(string &nm)
{
    shared_ptr<string> newnm(new string("hwll word"));
    
    nm = *newnm;
    return;
}




