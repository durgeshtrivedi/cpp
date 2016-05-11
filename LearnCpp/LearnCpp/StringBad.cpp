//
//  StringBad.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 27/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "StringBad.hpp"
#include <cstring>

using std::cout;

//initize the static memeber

int StringBad::num_strings = 0;
int StringBad::CINLIM = 0;
StringBad ::StringBad(const  char*s)
{
    len = std::strlen(s);
    str = new char(len+1);
    std::strcpy(str, s );
    num_strings++;
    cout << num_strings << ": \"" << str
    << "\" object created\n"; // For Your Information
}

StringBad :: StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str , "c++");
    num_strings++;
    cout << num_strings << ": \"" << str
    << "\" default object created\n"; // FYI
}

StringBad ::~StringBad()
{
    cout << "\"" << str << "\" object deleted, "; // FYI
    --num_strings;
    cout << num_strings << " left\n"; // FYI
    delete []str;
}

StringBad::StringBad(const StringBad &sb)  // copy constructor
{
    num_strings++;
    len = sb.len;
    str = new  char(len+1);
    str = std::strcpy(str,sb.str);
    cout << num_strings << ": \"" << str
    << "\" object created\n"; // For Your Information
}

StringBad & StringBad ::operator=(const StringBad &st) // overlaod the assignment operator =
{
    if (this == &st) {
        return *this;
    }
    
    delete []str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}

std:: istream & operator >> (std::istream & is,StringBad &st)
{
    char temp[StringBad::CINLIM];
    is.get(temp, StringBad::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
