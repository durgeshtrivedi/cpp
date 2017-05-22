//
//  FunctionTemplates.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 19/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "FunctionTemplates.hpp"

template <typename T>
void swap (T &a, T &b);

template <typename T>  // new template
void swap (T *a, T *b,const int n);

const int Lim = 8;
void functionTemplateExample() {
    
    int i = 10 ;
    int j= 20;
    
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    
    swap(i,j); // generates void Swap(int &, int &)
    
    cout << "Now i, j = " << i << ", " << j << ".\n";
    double x = 24.5;
    double y = 81.7;
    
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated double swapper:\n";
    
    swap(x,y); // generates void Swap(double &, double &)
    
    cout << "Now x, y = " << x << ", " << y << ".\n";
    // cin.get();
    
    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,7,2,0,1,9,6,9};
    cout << "Original arrays:\n";
    show(d1);
    show(d2);
    swap(d1,d2,Lim); // matches new template
    cout << "Swapped arrays:\n";
    show(d1);
    show(d2);
    // cin.get();

}

template <typename T>
void swap(T a, T b) {
    T temp;
    temp = a;
    a = b;
    b = temp;

}

template <typename T>
void swap(T *a, T *b, const int n) {
    
    T temp;
    
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int a[]) {
   
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    
    for (int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}
