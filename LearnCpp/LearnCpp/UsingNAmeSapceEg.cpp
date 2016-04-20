//
//  UsingNAmeSapceEg.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 20/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>

#include "NameSpaceExample.hpp"

#include <iostream>

void other(void);

void another(void);

int main(void)
{
    using debt:: Debt;
    using debt:: showDebt;
    
    Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
    showDebt(golf);
    other();
    another();
    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debt;
    
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++)
        getDebt(zippy[i]);
    
    for (i = 0; i < 3; i++)
        showDebt(zippy[i]);
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
    return;
    
}

void another(void)
{
    using pers::Person;
    Person collector = { "Milo", "Rightshift" };
    pers::showPerson(collector);
    std::cout << std::endl;
}
