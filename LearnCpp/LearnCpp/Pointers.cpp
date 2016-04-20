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

//int main()
//{
//    setPointerValue();
//}


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
    
    
    // pointer to array
    int *array = new int [10];
    
    array[1] = 10;
    
    cout << "array values :"<< array[1] << endl;
 
    
    int stack[4]  = {1,2,3,4};
    
    int values [4] = {1,2,3,4};
    
    int * ps = stack;
    
    cout << "Values of ps :"<< ps[0] << endl;
    
    ps = ps+1;
    
    cout << "Values of ps :"<< ps[0] << endl;
    
    cout << "Values of ps :"<< *(ps -1) << endl;
     cout << "Values of ps :"<< *(ps +1) << endl;
    
    
    int (*pw)[4] = &stack;
    
     cout << "Values of pw :"<< *(*pw + 1) << endl;
     cout << "Values of pw :"<< (*pw)[2] << endl;
    
    double  *pt = new double [10];
    
     cout << "Values of pt :"<< *(pt + 3) << endl;
    
    
}
