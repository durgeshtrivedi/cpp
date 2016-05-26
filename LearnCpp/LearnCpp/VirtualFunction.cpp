//
//  VirtualFunction.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 13/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "VirtualFunction.hpp"
#include <iostream>

using namespace std;
int main16();
Base::Base():name("Durgesh")
{
    cout<< "Base defaut Constructor" <<endl ;
}
Base::Base(std::string nm) : name(nm)
{
     cout<< "Base parameteriesd Constructor" <<endl ;
}

Derived::Derived():name("Deva")
{
     cout<< "Derived defaut Constructor" <<endl ;
}

Derived::Derived(std::string nm):name(nm)
{
    cout<< "Derived parametrised Constructor" <<endl ;
}

void Base :: show()
{
    cout<< "Show from the base"<<endl;
}

void Derived :: show()
{
    cout<< "Show from the Drived" <<endl ;
}


void Base :: PrintData()
{
    cout<< "PrintData from the base" <<endl ;
}

void Derived :: PrintData()
{
    cout<< "PrintData from the Drived" <<endl ;
}

void Base :: MyData()
{
    cout<< "MyData from the base" <<endl ;
}

void Derived :: Mydata()
{
    cout<< "MyData from the Drived" <<endl ;
}


//int main()
//{
//    int main16();
//}

int main16()
{
    Base base;
    Derived drived;
    
    
    
    
    base.show();
    drived.show();
    
    Base &base1 = drived;
    
    base1.show();  // it will print show of base becase show is not virtual
    
    Derived *drive1= &drived;
    
    drive1->PrintData();
    
    Base *mybase = &drived;
    
    mybase->MyData();
    
    
    cout << "Print name from Base " <<base1.name <<endl ; // variable are call by reference
    
    cout << "Print name from Base " <<mybase->name <<endl ; // variable are call by pointer
    
    //cout << "Print name from Base " <<(Derived*)base1.name <<endl ; // variable are call by reference
    
    //cout << "Print name from Base " <<mybase->name <<endl ; // variable are call by pointer
    return 0;
}