//
//  References.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 18/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "References.hpp"


void swapR(int &a, int &b);
void swapP(int *a, int *b);
void swapV(int a, int b);


void passByReferenceExample() {
    
    int value = 300;
    int place = 350;
    
    cout << "Value = $ " << value << endl;
    cout << " Place = $ " << place << endl;
    cout << "Using references to swap contents:\n";
    swapR(value, place); // pass variables
    
    cout << "Value = $ " << value << endl;
    cout << " Place = $ " << place << endl;
    
    cout << "Using Pointer to swap contents:\n";
    
    swapP(&value, &place);
    
    cout << "Value = $ " << value << endl;
    cout << " Place = $ " << place << endl;
    
    cout << "Using Vriable to swap contents:\n";
    
    swapV(value, place);
    
    cout << "Value = $ " << value << endl;
    cout << " Place = $ " << place << endl;
}

void swapR(int &a, int &b) {
    
    int temp;
    temp = a;
    a = b ;
    b = temp;
}


void swapP(int *a, int *b) {
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    
}


void swapV(int a, int b) {
    
    int temp;
    temp = a;
    a = b ;
    b = temp;
}
