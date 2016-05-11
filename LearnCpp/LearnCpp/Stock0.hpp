//
//  Stock0.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 20/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Stock0_hpp
#define Stock0_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Stock
{
  
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
    
public:
    void acquire(const std::string & co,long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
    
};




#endif /* Stock0_hpp */
