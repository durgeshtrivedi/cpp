//
//  OutPutFile.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 28/03/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>

void readINtoFile();

//int main()
//{
//    readINtoFile();
//    return 0;
//}



void readINtoFile()
{
    using namespace std;
    
    char automobile[50];
    int year;
    double price;
    double pricenow;
    
    ofstream outfile;
    
    outfile.open("text1.txt");
    
    cout<< "Enter name and modle for you automobile :" << endl;
    cin.getline(automobile, 50);
    cout << "Model Year :" << endl;
    cin >> year;
    
    cout << "Enter original making price for you model :" << endl;
    cin >> price;
    
    pricenow = .913 * price;
    
    
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    
    cout << "Was asking $" << price << endl;
    cout << "Now asking $" << pricenow << endl;
    
    outfile << fixed;
    
    outfile.precision(2);
    
    outfile.setf(ios_base::showpoint);
    
    outfile << "Make and model: " << automobile << endl;
    outfile << "Year: " << year << endl;
    
    outfile << "Was asking $" << price << endl;
    outfile << "Now asking $" << pricenow << endl;
    
    outfile.close();
    
}