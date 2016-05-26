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

class Worker
{
    private :
    void show();
    
    public :
    Worker ();
    void PrintWorker();
};

class Waiter :public Worker
{
    private :
    void show();
    
    public :
    Waiter();
    void PrintWorker();
};


class Singer :public Worker
{
    private :
    void show();
    
    public :
    Singer();
    void PrintWorker();
};


class SingerWaiter : public Singer,public Waiter
{
    private :
    void show();
    
    public :
    SingerWaiter();
    void PrintWorker();
};