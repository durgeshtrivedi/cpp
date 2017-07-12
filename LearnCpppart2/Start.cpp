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
        case 7:
            cout << "Array pointer example  " << endl;
            array_Pointer();
            break;
        case 8:
            cout << "Function Pointer example" << endl;
            functionPointer();
            break;
            
        case 9:
            cout << "Function Pointer example 2 "<< endl;
            functionPointerExample();
            break;
            
        case 10:
            cout << "Example of references :" << endl;
            passByReferenceExample();
            break;
        case 11:
            cout << "Example for function template" << endl ;
            functionTemplateExample();
            break;
            
        case 12:
            cout << "class Example " << endl;
            classExample();
            break;
        case 13:
            cout << "Operator overloading example " << endl;
            operatorOVerloadingExample();
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

void classExample() {
    
    //using constructor to creat new object
    
    Stock1 stock("MY company", 10, 20.0);  // 1 syntax for the constructo
    
    Stock1 stocky = Stock1("Your company", 10, 20.0);
    
    Stock1 fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000,40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000,0.125);
    fluffy_the_cat.show();
    
    const int SKT = 4;
    Stock1 stocks[SKT] = {
    Stock1("My company", 10, 10.0),
        Stock1("Your company", 10, 20.0),
        Stock1("our company", 10, 30.0),
        Stock1("WE company", 10, 40.0)
    };
    
    cout << "Stock holding " << endl;
    
    for (int i = 0; i< SKT; i++) {
        
        stocks[i].show();
    }
    
    const Stock1 *top = &stocks[0];
    
    for (int i = 0; i< SKT; i++) {
        top = &top->topal(stocks[i]);
        // now top points to the most valuable holding
        std::cout << "\nMost valuable holding:\n";
        top->show();
        
    }
}
 void operatorOVerloadingExample() {
     Times planning;
     Times coding(2, 40);
     Times fixing(5, 55);
     Times total;
     
     cout << "planning time = ";
     planning.Show();
     cout << endl;
     
     cout << "coding time = ";
     coding.Show();
     cout << endl;
     
     cout << "fixing time = ";
     fixing.Show();
     cout << endl;
     total = coding + fixing;
     
     // operator notation
     cout << "coding + fixing = ";
     total.Show();
     cout << endl;
     
     Times morefixing(3, 28);
     cout << "more fixing time = ";
     morefixing.Show();
     cout << endl;
     
     total = morefixing.operator+(total);

     // function notation
     cout << "morefixing.operator+(total) = ";
     total.Show();
     cout << endl;
     
     
     Times weeding(4, 35);
     Times waxing(2, 47);
     Times total1;
     Times diff;
     Times adjusted;
 
     
     cout << "weeding time = ";
     weeding.Show();
     cout << endl;
     cout << "waxing time = ";
     waxing.Show();
     cout << endl;
     
     cout << "total work time = ";
     total1 = weeding + waxing; // use operator+()
     total1.Show();
     cout << endl;
     
     diff = weeding - waxing; // use operator-()
     cout << "weeding time - waxing time = ";
     diff.Show();
     cout << endl;
     
     adjusted = total1 * 1.5; // use operator+()
     cout << "adjusted work time = ";
     adjusted.Show();
     cout << endl;
     
     
     Times aida(3, 35);
     Times tosca(2, 48);
     Times temp;
     cout << "Aida and Tosca:\n";
     cout << aida<<"; " << tosca << endl;
     
     temp = aida + tosca; // operator+()
     cout << "Aida + Tosca: " << temp << endl;
     
     temp = aida* 1.17; // member operator*()
     cout << "Aida * 1.17: " << temp << endl;
     cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
}
