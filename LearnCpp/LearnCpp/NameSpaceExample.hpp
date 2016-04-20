//
//  NameSpaceExample.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 20/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//


//#include <stdio.h>
//#include <iostream>
#include  <string>


namespace pers {
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debt {
    using namespace pers;
    
    struct Debt
    {
        Person name;
        double amount;
    };
    
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[],int n);
}

