//
//  Pointers.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "Pointers.hpp"

char* getName();

void pointerExample() {
    
    int value = 10;
    
    int *newvalue = &value;
    
    int nextvalue = *newvalue + 1;
    
    cout << "Value " << value << endl;
    cout << "New value using pointer " << *newvalue << endl;
    cout << "Value incremented using pointer " << nextvalue << endl;
    
    int *pt = new int;
    
    *pt = 100;
    
    double *pd = new double;
    
    *pd = 101.1;
    
    cout << "size of *pt " << sizeof(*pt) << ", size of pt " << sizeof(pt) << endl;
    cout << "size of *pd " << sizeof(*pd) << ", size of pd " << sizeof(pd) << endl;
    
    delete pt;
    delete pd;
    
    pt = new int[10];
    
    pt[0] = 10;
    pt[1] = 20;
    pt[2] = 30;
    cout<< "Value at index 0 of array " << pt[0] << " Index 1 " << pt[1] << endl;
    
    pt = pt + 1; // increment the pointer
    
    cout << "Value at index 0 after incremeting pointer pt = pt + 1 " << pt[0] << endl;
    
    double arr[10] {1.2,2.3,3.4};
    double * pt1 = arr;
    pt1 = &arr[0];
    
    
    cout << "arr " << arr << "," << " *pt1 " << *pt1 << endl;
    cout << "pt1 " << pt1 << endl;
    
    pt1 = pt1 + 1; // increment the pointer
    
    cout<< " pt1 value afte pt1 + 1 " << pt1 << endl;
    cout<< " *pt1 value after pt1 + 1 " << *pt1 << endl;
    
    cout << "arr[0] " << arr[0] << endl;
    cout << "*(arr +1) " << *(arr + 1) << endl;
    
    cout << "size of arr " << sizeof (arr) << endl ;
    cout << "size of pt1 " << sizeof (pt1) << endl;
    
    
    char * name ;
    name = getName();
    
    cout << name <<" at "<< (int*) name << endl;
    
    delete [] name;
    
    name = getName() ;
    
    
    cout << name <<" at "<< (int*) name << endl;
    
    delete [] name;
    
    
    struct antartical_year_end {
    
        int year;
    };
    antartical_year_end s01,s02,s03;
    
    antartical_year_end *pa1 = &s01;
    
    
    pa1->year = 1999;
    
    antartical_year_end *pa2 = &s02;
    
    pa2->year = 2003;
    
    cout << pa1->year << endl;
    antartical_year_end trio[3];
    
    trio[0].year = 2000;
    cout << trio[0].year << endl;
    
    const antartical_year_end *po1[3] = {&s01, &s02, &s03};
    
    cout << po1[0]->year << endl;
    
    const antartical_year_end **aap = po1;
    
    auto ppb = po1;
    
    
    cout << (*(ppb+1))->year << endl;
    
    
    
}


char* getName() {
    char temp[80];
    
    cin.get();
    cout << " Enter the value for the temp :" << endl;
    cin >> temp;
    
    char *pn = new char[strlen(temp) + 1];
    
    strcpy(pn, temp);
    
    return pn;

}


