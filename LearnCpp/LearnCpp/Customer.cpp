//
//  Customer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "Customer.hpp"
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}