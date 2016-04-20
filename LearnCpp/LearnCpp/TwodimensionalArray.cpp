//
//  TwodimensionalArray.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 22/03/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>
const int citie = 5;
const int years = 4;

using namespace std;

void creattwoDimensionalArray();

void printStar();

//int main()
//{
//    //creattwoDimensionalArray();
//    printStar();
//    return 0;
//}

void creattwoDimensionalArray()
{
    
    const string  cities[citie] = {
      
        "Mumbai",
        "Delhi",
        "Indore",
        "Ujjain",
        "Dewas"
    
    };
    
    int maxTemp[years][citie] = {
    
        {45,44,43,42,40},
        {21,23,34,55,43},
        {31,32,34,35,43},
        {21,22,13,34,45}
    
    };
    
    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < citie; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < years; ++year)
            cout << maxTemp[year][city] << "\t";
        cout << endl;
    }
    
}

//Write a program using nested loops that asks the user to enter a value for the
//number of rows to display. It should then display that many rows of asterisks, with
//one asterisk in the first row, two in the second row,and so on. For each row, the
//asterisks are preceded by the number of periods needed to make all the rows
//display a total number of characters equal to the number of rows.A sample run
//would look like this:

//....*
//...**
//..***
//.****
//*****

void printStar()

{
    
    int astric;
    cout<< "ENTER THE NUMBER OF ASTRIC :";
    cin >> astric;
   
    int count = astric;
    
    cout<< "YOU HAVE NUMBER OF ASTRIC :" <<astric << endl;
    
    for (; astric > 0; astric--) {
        for (int numberofdots = 0;numberofdots < count; numberofdots++) {
            if (numberofdots < astric -1 ) {
                 cout << "." ;
            }
            else {
                cout << "*";
            }
            
        }
        cout << endl;
    }
    
}
