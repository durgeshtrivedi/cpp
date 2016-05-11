//
//  StringBad.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 27/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef StringBad_hpp
#define StringBad_hpp

#include <stdio.h>
#include <iostream>
class StringBad
{
private:
    char * str; // pointer to string
    int len; // length of string
    static int num_strings; // number of objects
    static int CINLIM;
public:
    StringBad(const char * s); // constructor
    StringBad(const StringBad &sb);
    StringBad(); // default constructor
    ~StringBad(); // destructor
    StringBad & operator=(const StringBad &st);
    // friend function
    friend std::ostream & operator<<(std::ostream &os,const StringBad &sb);
    friend std::istream & operator>>(std::istream & is, StringBad & st);
    
};

#endif /* StringBad_hpp */

