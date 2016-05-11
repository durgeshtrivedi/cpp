//
//  Customer.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp
#include <iostream>
#include <stdio.h>
using namespace::std;
class Customer
{
private:
    long arrive; // arrival time for customer
    int processtime; // processing time for customer

public:
    Customer() { arrive = processtime = 0; }
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

#endif /* Customer_hpp */
