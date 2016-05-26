//
//  VirtualBAseClass.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 16/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "VirtualBAseClass.hpp"

#include <stdio.h>
#include <iostream>

using namespace std;
using namespace WordSinger;
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

void MySinger:: sing(){
    cout << "MYSinger Sing" << endl;
}

void AllSinger:: sing(){
    cout << "AllSinger Sing" << endl;
}


//int main()
//{
//    SingerWaiter singWaiter;
//    
//    singWaiter.show();
//    
//    HoneySing honey;
//    
//    //honey.AllSinger::sing();
//    
//    honey.MySinger::sing();
//    
//    
//    
//
//    
//    return 0;
//}