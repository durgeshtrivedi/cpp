//
//  TemplatesExampl.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 12/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>



template <typename AnyType>
void Swap(AnyType &a, AnyType &b);


template <typename AnyType>
void Swap(AnyType *a,AnyType *b ,int n);  //overloading template

struct Job
{
    int salary;
    int empName;
    std::string address;
};
// explicit specialization
template <> void Swap <Job> (Job &a, Job &b);
void Show(Job &j);


void Show(int a []);
const int Lim = 8;


template <class T>
T Add(T a, T b);


template <class  T>
auto hello(T x, T y) -> decltype(x+y);

int main()
{
    int value =  400;
    int value1 = 500;
    
    double number = 300.0;
    double number1 = 400.0;
    
    using namespace  std;
    
    cout << "Value " << value << " Value1 " << value1  << endl ;
    
    Swap(value, value1);
    
    cout  << "After Swap "<< "Value " << value << " Value1 " << value1  << endl ;
    
    cout << "Number " << number << " Number1 " << number1 << endl ;
    
    Swap(number, number1);
    
    
    cout <<"After Swap " << "Number " << number << " Number1 " << number1 << endl ;
   // swap(value1, number1);
    
    
    
    
    using namespace std;
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j); // matches original template
    cout << "Now i, j = " << i << ", " << j << ".\n";
    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,7,2,0,1,9,6,9};
    cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1,d2,Lim); // matches new template
    cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);
    
    Job sue = { 7300, 7,"Susan Yaffee",};
    Job sidney = { 7806, 9,"Sidney Taffee",};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // uses void Swap(job &, job &)
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    
    ///
    
    int m = 6;
    double x = 10.2;
    cout << Add<double>(x, m) << endl; // explicit instantiation
    
    return 0;
}


template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
    AnyType temp ;
    
    
    temp = a;
    a = b;
    b = temp;
}

template <typename AnyType>
void Swap(AnyType *a, AnyType *b,int n)
{
    AnyType temp;
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    
}

void Show(int a [])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}

template <> void Swap(Job &a, Job &b)
{
    Job temp ;
    
    temp = a;
    a = b;
    b = temp;
}

void Show(Job &j)
{
    using namespace std;
    cout << j.empName << ": $" << j.salary
    << " on floor " << j.address << endl;
}


template <class T>
T Add(T a, T b) // pass by value
{
    return a + b;
}


