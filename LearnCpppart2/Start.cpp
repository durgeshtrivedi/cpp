//
//  Start.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 24/04/17.
//  Copyright © 2017 durgesh. All rights reserved.
//


#include  "Mainheader.hpp"
static int option = 0;
int main() {

    cout << "My second revison for Cpp" << endl;
    int play;
    
    cout << "Enter the example number you want to run : ";
    cin >> play;
    switch (play) {
    case 1:
             cout << "This Example is for array in C++" << endl;
            arrayExample();
            break;
        case 2:
            cout << "This example is for string ";
            stringExample();
            break;
            
        case 3:
            cout << "This is examaple of structure " << endl;
            structExample();
            break;
        case 4:
            cout << "This is examaple of Pointers " << endl;
            pointerExample();
            break;
        case 5:
            cout << "This is examaple of String compare" << endl;
            stringCompareExample();
            break;
        case 6:
            cout << "This is file I/O example " << endl;
            fileIOExample();
            break;
        default:
            
            if (option == 0) {
                cout << "The option you provide is wrong please reenter the correct option" << endl;
                option++;
                main();
            } else {
                cout << "There is only 2 attempt you are about to exit" <<endl;
                option = 0;
            }
    }
}


/// Array Example

void arrayExample() {
  
    int array[10];
    array[5] = 19;
    cout << "The value of array at index 5 is " << array[5] << endl;
    int myarray[]  = {1,2,3,4};
    cout << "The value myarray[0] " << myarray[0] << " myarray[1] " << myarray[1] << " myarray[2] " << myarray[2] << endl;
    
    cout << "Size of array myarray " << sizeof myarray << " Size of element myarray[0] " << sizeof myarray[0] << endl;
    
    float value[0] {} ;
    cout << "Empty array value :" <<value[0];
}

void stringExample() {
    const int ArraySz = 20;
    char str[] = "This is Durgesh ";
    char str1[] = {'A', 'B', 'C', '\0'};
    char mystr[15];
    cout << str << " and " << str1 << endl;
    cout << "Enter the string " << endl;
    cin >> mystr;
    cout << "You insterted string " << mystr << endl;
    cin.get();
    // USing ger
    char newstr[20];
    cout << "Enter the new string " << endl;
    cin.get(newstr,ArraySz).get();
    cout << "You insterted string " << newstr << endl;
    
    string str3 = "helloo";
    string str2 = str1;
    
    string str4;
    
    char char1[10] = "why";
    char char2[5] = "Word";
    strcpy(char1,char2);
    
    cout << "Value in " << char1 << endl;
    cout << "size of str3" << str3.size() << endl;
    
    cout << "Concanate string array char1 + char2 using strcat " << strcat(char1, char2) << endl;
    
    cout << R"( What is doing on "here" ! )"  << endl;
        
    cout << R"+*("(what the hell is going on  here) !!! ")+*" <<endl;
    
}

void stringCompareExample() {

    char word[10] = "?ate";
    
    for (int ch = 'a'; strcmp(word,"mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    
    endofFileExample();
}

void endofFileExample() {
    
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF) {
        
        cout.put(char(ch));
        count++;
    }
    cout << endl << count << " characters read\n";
}
