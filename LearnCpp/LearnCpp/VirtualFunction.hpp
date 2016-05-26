//
//  VirtualFunction.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 13/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef VirtualFunction_hpp
#define VirtualFunction_hpp

#include <stdio.h>
#include <string>
class Base
{
    private:
    
public:
    
    std::string name;
    
    Base(std::string nm);
    Base();
    
    void show();
    void PrintData();
    
    virtual void MyData();
};

class Derived:public Base
{
    private :
    
    
    public :
    
    std::string name;
    
    Derived(std::string nm);
    Derived();

    
    void show();
    void PrintData();
    
    void Mydata();
};

#endif /* VirtualFunction_hpp */




