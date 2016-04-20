//
//  ReferenceVariable.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 07/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int functionRef();

void swapBYPointer(int *p, int *q);

void swapBYReference(int &a,int &b);

void swapByValue(int x,int y);

void Swapthevalues ();

//int main()
//{
//    functionRef();
//    
//    Swapthevalues();
//    return 0;
//}


int functionRef()
{

    int a  =10;
    
    int &b = a;
    
    cout << "REfErence variable a :"<< a << " &  b :" << b << endl;
    
    b =20;
    
     cout << "REfErence varlabee a :"<< a << " &  b :" << b << endl;
    
    
    int value  = 1;
    
    int *myvalue = &value;
    
    int &newValue = *myvalue;
    
    
    cout << "REfErence variable Value : "<< value << " myValue " << *myvalue  << " NewValue "  << newValue << endl;

    int nextValue = 10;
    
    myvalue = &nextValue;
    
    value = 30;
    *myvalue = 40;
    
    cout << "REfErence variable Value : "<< value << " myValue " << *myvalue  << " NewValue "  << newValue << endl;
    
    newValue =50;
    
     cout << "REfErence variable Value : "<< value << " myValue " << *myvalue  << " NewValue "  << newValue << endl;
    
    
    return 0;
}


void Swapthevalues ()
{
    int value = 350;
    int nextValue = 400;
    swapBYPointer(&value, &nextValue);
    cout << "Swaped Value : " <<value << " NextValue  " <<nextValue << endl;
    
    swapBYReference(value, nextValue);
    cout << "Swaped Value : " <<value << " NextValue  " <<nextValue << endl;

    swapByValue(value, nextValue);
    cout << "Swaped Value : " <<value << " NextValue  " <<nextValue << endl;
    
    
}

void swapBYPointer(int *p, int *q)
{
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
    
}

void swapBYReference(int &a,int &b)
{
    int temp;
    
    temp = a;
    a = b;
    b= temp;
    
}

void swapByValue(int x,int y)
{
    
    int temp;
    temp = x;
    x = y;
    y = temp;
}