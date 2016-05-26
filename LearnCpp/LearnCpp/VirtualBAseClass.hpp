//
//  VirtualBAseClass.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 16/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef VirtualBAseClass_hpp
#define VirtualBAseClass_hpp

#include <stdio.h>

#include <stdio.h>

namespace WordSinger {
    

class Worker
{
    //private :
    //  void show();
    
    public :
    void show();
    Worker ();
    void PrintWorker();
};

class Waiter :virtual public Worker
{
    //private :
    
    
    public :
    void show();
    Waiter();
    void PrintWorker();
};


class Singer :virtual public Worker
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
    
    class AllSinger
    {
    public:
        void sing();
    };
    
    class MySinger : public AllSinger
    {
    public:
       void sing();
    };
    

class YOYOSinger:virtual public AllSinger
{

};

class HoneySing :public MySinger,public YOYOSinger
{
    public :
    
    void youDontKnowSinging();
};
}

#endif /* VirtualBAseClass_hpp */
