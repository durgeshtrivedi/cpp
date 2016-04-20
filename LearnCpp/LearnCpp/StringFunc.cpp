//
//  StringFunc.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 06/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>

#include <iostream>

using namespace std;

unsigned int count_num_char(const char* str, char ch);

//int main()
//{
//    
//    char mmm[15] ="minimumm"; // string is an array
//    
//    char *wail = "uluuate"; //wail points to a stirng
//    
//    unsigned int ms = count_num_char(mmm, 'm' );
//    unsigned int ls = count_num_char(wail,'u');
//    
//    cout <<"Number of char in the string for " << "m " << ms << endl ;
//    
//    cout <<"Number of char in the string for " << "u " << ls << endl ;
//    
//    return 0;
//}

// count number of char repeat in a string
unsigned int count_num_char(const char* str, char ch)
{
    
    unsigned int count = 0;
    
    while (*str)
    {
        if (*str == ch)
            count++;
            str++; // moving pointer to next character
    }
    return count;
}

