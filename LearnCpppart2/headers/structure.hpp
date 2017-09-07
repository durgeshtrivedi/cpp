//
//  structure.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef structure_hpp
#define structure_hpp


#include "stdheader.hpp"

struct Home {
    
    char name[10];
    char address[20];
    int value;
};

struct Person {
    string name;
    int age;
    double weight;
    
    public :
    
    Person() {
        name = "durgesh";
        age = 35;
        weight = 70;
    }
    
    Person(Person const &newperson) {
        cout << "copy constructor " << newperson.name  << " " << newperson.age <<endl;
        name = newperson.name;
        age = newperson.age;
        weight = newperson.weight;
    }
    Person(string name, int age, int weight) {
        this->name = name;
        this->age = age ;
        this->weight = weight;
    }
    
    void print() {
        cout << name  << " " << age << " " << weight << endl;
    }
    
    void print() const {
        cout << name  << " " << age << " " << weight << endl;
    }
    
    bool operator<(const Person & person) const { // operator overloading 
        return name < person.name;
    }
    
    friend bool compare1(const Person &t1, const Person &t2);
};

class Test {
    int id;
    string name;

public:
    void print() {
        cout << "Id " << id << "  name " << name << endl;
    }
    

    Test(): id(0),name(""){}
    
    Test(int id, string name):id(id), name(name) {}
    
    //Rule of 3
      // if you define either of these 3 copy contructor , assginment operator , destructor you need to define other 2
   
    // copy constructor
    Test(const Test &test) {
        cout << "Copy Constructor" << endl;
        id = test.id;
        name = test.name;
    }
    
    // assignment operator overloading
    const Test& operator=(const Test &test) {
        cout << "Assignment operator" << endl;
        id = test.id;
        name = test.name;
        return *this;
    }
    
  friend ostream& operator<<(ostream &out, const Test &test)  {
        out << test.name << " " << test.id << endl;
        return out;
    }
    
};

#pragma pack(push,1)
struct Person1 {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

#endif /* structure_hpp */
