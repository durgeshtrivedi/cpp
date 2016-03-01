//
//  main.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 17/02/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <iostream>
#include "includefile.h"

void arrayType();
void StringType();
void readvalues();
void stringClass();
//int main()
//
//{
//   // cout << "Hello this is a cpp program after long time.\n";
//    //addthenumber();
//    //youAgeInMonth();
//    //fahrenheitToCelcious();
//    //arrayType();
//    //StringType();
//    //readvalues();
//    stringClass();
//    return 0;
//}

void addthenumber()
{

    int number;
    cout<<"Please inter number you want to add \n";
    cin >> number;
    cout << "You intered " <<number << endl;
}

void youAgeInMonth()
{
    int months = 12;
    int age;
    cout << "Please inter your age :" << endl;
    cin >> age;
    
    cout << "Your age in months :" <<age * months <<endl;
}

void fahrenheitToCelcious()
{
    int celcious;
    cout << "Please inter the celcious value :";
    cin >> celcious;
    int fahrenheit;
    fahrenheit = 1.8 * celcious + 32;
    cout << celcious << " degree celcious is equal to " << fahrenheit << " degree fahrenhit" << endl;
}

void arrayType()
{
    int newarray[5];
    
    newarray[0] = 10;
    
    newarray[4] = 11;
    
    int array1[5] = {1,2,3,4,5};
    
    float values[] {};
    
    values[1] = 10;
    
    cout << "Here is the array value :" << values[2] << endl;
    
    cout << "Here is the array value :" << newarray[2] << endl;
}


void StringType()
{
    char mystring[10] = {'a','b','c','d','e','f','\0'};
    char newstring[11] = "Durgesh";
    char string1 [] = "TRivedi";
    
    
    cout<< "Please enter a string here :"<<endl;
    cin>>string1;
    
    cout<< "This is the string you endter :"<<string1 <<endl;
    
    cout<< "Please enter a string another string :"<<endl;
    cin.getline(newstring, 10);
    
    cout<< "This is the string you second time :"<<newstring <<endl;
}

void readvalues()
{
    char values[40];
    char inputs[12];
    
    cout<< "Enter those values here :"<< endl;
    
    cin.get(values,40).get();
cout<< "Here is values : "<< values<<endl;
    cout<< "Enter another value : ";
    cin.get(inputs,20);
    cout<< "value  "<< inputs;
}

void stringClass()
{
    string  name;
    cout<<"Enter name here : ";
    cin>>name;
    cout<< name<<endl;
    
    string newname =name;
    
    cout <<"Newname assign as name :" <<newname <<endl;
    
    name = "Trivedi";
    cout<<"NAme is now "<<name<<endl;
    cout << "The newname :" <<newname<<endl;
    
    cout<<"name and newname added "<<name+newname<<endl;
    
    cout<< "\"(what the fuck is going on ?)\""<<endl;
}