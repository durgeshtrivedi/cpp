//
//  MutipleInhertance.cpp
//  
//
//  Created by Durgesh Trivedi on 16/05/16.
//
//

#include "MutipleInhertance.hpp"


//
//  VirtualBaseClass.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 16/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include "MutipleInhertance.hpp"
#include <iostream>

using namespace std;


void Worker :: show()
{
    cout << "Worker Show" << endl;
}

Worker :: Worker (){

    cout << "Worker Constructor " << endl;
}
void Worker ::  PrintWorker()
{
    cout << "Worker PrintWorker" << endl;
}

void Waiter :: show(){
 cout << "Waiter Show" << endl;
}

Waiter ::Waiter(){
 cout << "Waiter Constructor" << endl;
}
void Waiter :: PrintWorker(){
  cout << "Waiter PrintWorker" << endl;
}

void Singer :: show(){
    cout << "Singer Show" << endl;
}
    

Singer :: Singer(){
    cout << "Singer Constructor" << endl;
}

void Singer :: PrintWorker(){
    cout << "Singer PrintWorker" << endl;
}

void SingerWaiter:: show(){
    cout << "SingerWaiter Show" << endl;
}
    
 
SingerWaiter:: SingerWaiter(){
    cout << "SingerWaiter Constructor" << endl;
}

void SingerWaiter:: PrintWorker(){
    cout << "SingerWaiter PrintWorker" << endl;
}


int main17()
{
    SingerWaiter singWaiter;
    
    singWaiter.show();
    
    singWaiter.Waiter::show();
    
    singWaiter.Singer::show();
    //singWaiter.Singer.Worker::show();
    
    return 0;
}
