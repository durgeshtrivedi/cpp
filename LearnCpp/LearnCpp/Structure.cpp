//
//  Structure.c
//  LearnCpp
//
//  Created by Durgesh Trivedi on 29/02/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <iostream>

using namespace std;

void structureValues();
//void structurePointer(const Firstimer *timer );
struct Firstimer
{

    int count;
    
    char name[10];
    
    string address;
};


void structurePointer(const Firstimer *timer );

//int main()
//{
//    structureValues();
//    
//    Firstimer timer = {10,"Durgesh", "Pune"};
//    structurePointer(&timer);
//}

void structurePointer(const Firstimer *timer )
{
    cout << timer->count << endl ;
    cout << timer->name << endl ;
    cout << timer->address << endl ;
}

void structureValues()
{
    
    Firstimer person;
    
    Firstimer person2 = {
        10,"Deva","Pune"
    };
    
    person = person2;
    
    person2.count = 20;
    
    cout << person.count <<endl;
    cout << person2.count<<endl;
    
    //c++ 11 omit = sign
    
    Firstimer person3 {20,"DD","home" };
    
    cout << person3.count<<endl;
    
    // struct and declaration
    
    struct SecondPerson
    {
        int value;
        string name;
    }SecondPerson;
    
    //struct and assignment
    
    struct ThridPerson{
        
        int count;
        string value;
    }thirdperson = {30,"hello"};
    
    //structure with no type
    
    struct{
        int value;
        string name;
    }person4;
    
    person4 = {40,"hello"};
    
    cout << person4.value<<endl;
    
    //array of structure
    
    Firstimer  people[2]  = { {10,"Hello1","hello"},
        {20,"what","when"}};
    
    
}


void newStruct(){

struct inflamable
    {
        int value;
        string name;
    };

    inflamable newValue  {1, "hello"};
    
    inflamable *assign = new inflamable;
    
    cout << "This is the way to get the dynamic structure value " << assign->value;
    
     cout << "The other way to access is   " << (*assign).value;
    
    cout << "This is the way to get the normally  " << newValue.value;
    
    delete assign;
    
    int *ps ;
    
    *ps = 110 ;
    
    
    
}