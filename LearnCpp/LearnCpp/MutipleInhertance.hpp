//
//  MutipleInhertance.hpp
//  
//
//  Created by Durgesh Trivedi on 16/05/16.
//
//

#ifndef MutipleInhertance_hpp
#define MutipleInhertance_hpp

#include <stdio.h>

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
    //private :
  //  void show();
    
    public :
    void show();
    Worker ();
    void PrintWorker();
};

class Waiter :public Worker
{
    //private :

    
    public :
    void show();
    Waiter();
    void PrintWorker();
};


class Singer :public Worker
{

    
    public :
    void show();
    Singer();
    void PrintWorker();
};


class SingerWaiter : public Singer,public Waiter
{
    //private :
    
    
    public :
    void show();
    SingerWaiter();
    void PrintWorker();
};

#endif /* MutipleInhertance_hpp */
