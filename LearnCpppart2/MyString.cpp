//
//  MyString.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 29/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "MyString.hpp"

// init static member

int MyString:: num_strings = 0;

int MyString:: HowMany() {
    return num_strings;
}

// class method

MyString:: MyString (const char *s) {
    len = std:: strlen(s); // set sixe
    
    str = new char[len + 1 ];
    std:: strcpy(str, s);
    num_strings++;
}


MyString:: MyString () {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
    
}

MyString:: MyString (const MyString &st) {
    
    num_strings++;
    len = st.len;
    str = new char[len+1];
    strcpy(str, st.str); // copy string to new location
    
}

MyString::~MyString() {
    --num_strings;
    delete[]str;
}

MyString & MyString :: operator=(const MyString &st) {
    if (this == &st) {
        
        return *this;
    }
    
    delete [] str;
    len = st.len;
    str = new char[len +1];
    
    strcpy(str, st.str);
    return *this;
    
}



