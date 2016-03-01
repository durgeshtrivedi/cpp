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

struct Firstimer
{

    int count;
    
    char name[10];
    
    string address;
};




//int main()
//{
//    structureValues();
//}

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
    
    //structure with not type
    
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