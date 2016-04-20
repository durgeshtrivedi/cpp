//
//  readCharacter.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 22/03/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <iostream>

#include <stdio.h>

void readChar();

//int main()
//{
//    
//    readChar();
//    return 0;
//}


void readChar()
{
    using namespace std;
    
    
    char ch;
    
    int count = 0;
    
    cin.get(ch);
    while (cin.fail() == false) {
        cout << ch;
        ++count;
        cin.get(ch);
        
    }
    
    cout << endl << count << " characters read\n";
    
    // use cnt + d to terminate 
    
    
}