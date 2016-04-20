//
//  FunctionPointer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 06/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <iostream>


using namespace std;

int  functionPointer (char * name);
const double*  functionPointer0 (const double * value ,int n);
const double*  functionPointer1 (const double * value ,int n);
const double*  functionPointer2 (const double * value ,int n);
int main1();

typedef const double * (*function_pointer) (const double *, int a);

//int main()
//{
//    main1();
//}

int main1()
{
   int (*pter) (char *);
   const double  value1 [3] = {1.0,2.0,3.0};
    
    
    pter = functionPointer;
    
    const double* (*ptr[3])(const double * value ,int n) = {functionPointer0 ,functionPointer1,functionPointer2}; // array of function pointer
    
    ptr[0](value1,10);
    ptr[1](value1,10);
    ptr[2](value1,10);
    
    (*ptr[0])(value1,10);  // above 3 line and this 3 lines are same
    (*ptr[1])(value1,10);
    (*ptr[2])(value1,10);
    
    
   // *ptr[3] // an array of 3 pointers
   // (*ptr)[3] // a pointer to an array of 3 elements
    
    const double * (*(*pd)[3])(const double* value,int n) = &ptr;
    
    cout << "A pointer to a pointer to a pointer "  << (*pd)[0](value1,20) << endl;
    cout << "A pointer to a pointer to a pointer "  << (*pd)[1](value1,20) << endl;
    cout << "A pointer to a pointer to a pointer "  << (*pd)[2](value1,20)<< endl;
    
    
   cout << (*pter)("Durgesh");
    cout << pter("Durgesh");
    
    
    
    function_pointer fun_pt = functionPointer1;
    
    function_pointer funt_pt_array[3] = {functionPointer0 ,functionPointer1,functionPointer2};
    
    function_pointer  (*PT)[3] = &funt_pt_array;
    
    
    
    
    return 0;
}


int  functionPointer (char * name)
{
    cout << "Name passed :" << name << endl;
    return 1;
}

const double*  functionPointer0 (const double * value ,int n)
{
    cout << "Name passed :" << value[0] << endl;
    return value;
}


const double*  functionPointer1 (const double * value ,int n)
{
    cout << "Name passed :" << value[1] << endl;
    return value;
}

const double*  functionPointer2 (const double * value ,int n)
{
    cout << "Name passed :" << value[2] << endl;
    return value;
}