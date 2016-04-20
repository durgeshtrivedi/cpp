//
//  Operators.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/03/16.
//  Copyright © 2016 durgesh. All rights reserved.
//



#include <iostream>

#include <stdio.h>

void incrmentsandDecrements();
void incrmentsandDecrementsPointerINArray();

using namespace std;
//int main()
//{
//    incrmentsandDecrements();
//    incrmentsandDecrementsPointerINArray();
//    return 0;
//}




void incrmentsandDecrementsPointerINArray()
{

    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    
    double *pt = arr;
    
     cout<< "Current value of pt :" << pt <<endl; // address of the first element
    
    cout<< "Current value of *pt :" << *pt <<endl; // Take the pointer value i.e 21.1
    
    cout<< "Value of *++pt : " << *++pt <<endl; // increment the pointer and take the value i.e 32.8
    
    cout<< "Value of *pt++ :" << *pt++ <<endl;  // take the pointer value i.e 32.8 and then increment the pointer
    
    cout<< "Value of ++*pt : " << ++*pt <<endl; // take the pointer value and increment it by 1 i.e 24.4
    
    cout<< "Value of *pt +1 : " << *pt + 1 <<endl;  // increment the pointer value by 1 i.e 25.4
    
    cout<< "Value of ++(*pt) : " << ++(*pt) <<endl; // take the pointer value and increment by 1  i.e 25.4
    
    cout<< "Value of (*pt)++ : " << (*pt)++ <<endl;  //take the pointer value  i.e 25.4  and then increment it

    cout<< "Value of (*pt) : " << (*pt) <<endl; // Take the incremented value i.e 26.4

    cout <<endl;
    cout<<endl;
}


void incrmentsandDecrements()
{
        int *pt;
    
        pt = new int;
    
        *pt = 1;

    //This code is address value dependent can be change  the out put value after multiple  runs
    
    cout<< "Current value of pt :" << pt <<endl;  //address of the element
    
    //cout<< "Current value of ++pt :" << ++pt <<endl;  //address of the element
    
    cout<< "Current value of *pt :" << *pt <<endl; // Take the pointer value i.e 1
    
    cout<< "Value of *++pt : " << *++pt <<endl; // increment the pointer and take the value i.e 0  might be gurbage
    
    cout<< "Value of *pt++ :" << *pt++ <<endl;  // take the pointer value i.e 0  then increment the pointer
    
    cout<< "Value of ++*pt : " << ++*pt <<endl; // take the pointer value i.e 1 (from 0 to 1) and then increment the pointer
    
    cout<< "Value of *pt +1 : " << *pt + 1 <<endl;  // increment the pointer value by 1 i.e 2
    
    cout<< "Value of ++(*pt) : " << ++(*pt) <<endl; // take the pointer value and increment by 1  i.e 2
    
    cout<< "Value of (*pt)++ : " << (*pt)++ <<endl;  //take the pointer value  i.e 2  and then increment it
    
    cout<< "Value of (*pt) : " << (*pt) <<endl; // Take the incremented value i.e 3
 
    
    
}