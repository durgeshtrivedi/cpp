//
//  arrayElements.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 04/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int array_name(int arr[],int size);
void display_array(const int arr[],int element);
void  array_sum (int *begin ,int *end);
int sum(int arr[][4],int size);
int sum1(int arr[][4],int size);
int name();
using namespace std;

//int main()
//{
//    return name();
//}

int name()
{
    int array[10];
    int  element = array_name(array, 10);
    cout << "Number of element in the array  =" << element << endl;
    
    display_array(array, element);
    
    array_sum(array, array + element);
    
    const int array0 [6] = {1,2,3,4,5};
    int array1[6] = {1,2,3,4,5,6};
    // array  = &array1;
    
    int array2[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    cout << "Total :" << sum(array2,4) << endl;
     cout << "Total :" << sum1(array2,4) << endl;
        return 0;
}


void display_array(const int arr[],int element)
{
    for ( int index = 0; index < element ; index++) {
     //   arr[index] = 20; read only variable is not assignable
        cout << "Element at position " << index << ":"  << arr[index] << endl;
    }

}

int array_name(int arr[],int size)
{
    
    double temp;
    int index;
    for ( index = 0; index < size ; index++) {
            cout << "Enter value # ";
            cin >> temp;
        if (!cin) { // bad input
            cin.clear();
            while (cin.get() != '\n')
                continue;
                cout << "Bad input inout process terminated "  << endl;
            break;
        }
         else if(temp < 0) //signal to terminate
             break;
            else
            arr[index] = temp;
       }
    
    return index;
}


void  array_sum (int *begin ,int *end)

{
    int total = 0;
    while  (begin != end) {
        total += *begin;
        begin++;
    }
    
    cout << "Sum of array : " << total << endl;
}


int sum(int arr[][4],int size)
{
    int total;
    for (int r  =0 ;r < size ;r++)
        for (int c = 0; c < 4; c++) {
            total += arr[r][c];
        }
    
    return total;
}

int sum1(int arr[][4],int size)
{
    int total;
    for (int r  =0 ;r < size ;r++)
        for (int c = 0; c < 4; c++) {
            total +=  *(*(arr +r) +c);
        }
    
    return total;
}