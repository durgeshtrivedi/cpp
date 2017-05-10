//
//  FileOutPut.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 10/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "FileOutPut.hpp"


void fileIOExample() {
    
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    ofstream outFile;
    outFile.open("carinfo.txt");
    cin.get();
    cout << "Enter the make and model of the car: " << endl;
    cin.getline(automobile, 50);
    
    cout << "Enter the model Year : " << endl;
    cin >> year;
    
    cout << "Ente the original asking price : " << endl ;
    cin >> a_price;
    
    d_price = 0.913 * a_price;
    
    cout << std::fixed;
    cout.precision(2);
    
    cout.setf(std::ios_base:: showpoint);
 
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile << std::fixed;
    outFile.precision(2);
    
    outFile.setf(std::ios_base:: showpoint);
    
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();
    
}
