//
//  Pointers.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 01/03/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <iostream>

using namespace std;

void setPointerValue();

int main()
{
    setPointerValue();
}


void setPointerValue()
{
    int a = 10;
    
    int *value = &a;
    
    a = 20;
    
    cout << "Value of a :" << *value <<endl;
    cout << "Value of a :" << a << endl;
    
    
    cout << "address of a :"<< value << endl ;
    cout << "address of a :"<< &a << endl;
    
    
    int *p = (int*)100 ; // not ta correct way
    //cout << "address of p :"<< *p << endl;   this is going to fail

    int *data = new int;
    
    *data  =    10;
    
    cout << "address of data :"<< *data << endl;
}
