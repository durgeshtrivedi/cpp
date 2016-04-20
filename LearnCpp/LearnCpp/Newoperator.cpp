//
//  Newoperator.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 19/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include <new>

const int BUF = 512;
const int N = 5;

char buffer[BUF];

int main()
{
    using namespace std;
    double *p1,*p2;
    int i;
    cout << "Calling of new and placement New";
    p1 = new double[N];
    p2 = new (buffer) double[N];
    for(i = 0; i< N ; i++)
        p2[i] = p1[1] =1000 + 20.0 +i;
    cout << "Memory addresses:\n" << " heap: " << p1
    << " static: " << (void *) buffer <<endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << p1[i] << " at " << &p1[i] << "; ";
        cout << p2[i] << " at " << &p2[i] << endl;
    }
    
    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4;
    pd3= new double[N]; // find new address
    pd4 = new (buffer) double[N]; // overwrite old data
    for (i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }
    cout << "\nCalling new and placement new a third time:\n";
    delete [] p1;
    p1= new double[N];
    p2 = new (buffer + N * sizeof(double)) double[N];
    for (i = 0; i < N; i++)
        p2[i] = p1[i] = 1000 + 60.0 * i;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++)
    {
        cout << p1[i] << " at " << &p1[i] << "; ";
        cout << p2[i] << " at " << &p2[i] << endl;
    }
    delete [] p1;
    delete [] pd3;
    return 0;
    
}


