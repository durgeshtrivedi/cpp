//
//  structure.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "structure.hpp"

void structExample() {


    Home yourhome = {  "River",
        "ujjain" ,
        100
      
    };
    
    Home home1 = { "what", "YOu",12};
    
    Home home2 {"How", "How", 20}; // c++11 style
    
    Home home3[10] {
        { "what", "YOu",12},
        { "what", "YOu",12}
    };
    
     cout << "The value of my home structure " << home1.name  << ", " << home1.address << ", " << home1.value << endl;
     cout << "The value of my home structure " << home2.name  << ", " << home2.address << ", " << home2.value << endl;
     cout << "The value of my home structure for array index " << home3[0].name  << ", " << home3[0].address << ", " << home3[0].value << endl;
     cout << "The value of yourhome structure " << yourhome.name  << ", " << yourhome.address << ", " << yourhome.value << endl;

    Home *newhome = new Home;
    cin.get();
    cout << "Enter name of the house :" << endl;
    cin.get(newhome->address,20);
    
    cout << "Enter the name : " << endl;
    cin >> newhome->name;
    
    cout << "House address is :" << newhome->address << endl;
    cout << "house name is : " << newhome->name << endl;
    
    delete newhome;

}
