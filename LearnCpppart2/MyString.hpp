//
//  MyString.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 29/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <stdio.h>
#include "stdheader.hpp"


class MyString {
    
private:
    char *str;
    int len;
    static  int num_strings; // number of objects
    static const int CINLIM = 80; // cin input limet
    
public:
    // constructor
    MyString(const char *); // constructior
    MyString();  // default constructor
    MyString(const MyString &);  // copy constructor
    ~MyString(); // destructor
    int lenght () const {return len;}
    
   // overload operator
    MyString operator = (const char *);
    MyString & operator = (const MyString &);
    char & operator[] (int i);
    const char& operator[] (int i) const;
    

    // overload operator friend
    
    friend bool operator < (const MyString &s1, const MyString &s2);
    
    friend bool operator > (const MyString &s1, const MyString &s2);
    
    friend bool operator == (const MyString &s1, const MyString & s2);
   
    friend istream & operator >> (istream  &is, MyString &s1);
    
    friend ostream & operator << (ostream &os, MyString &s1);
    
    // static function
    static int HowMany();
};

#endif /* MyString_hpp */
