//
//  Stock10.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Stock10_hpp
#define Stock10_hpp

#include <stdio.h>

#include "Stock10.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Stock10
{
    
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
    
public:
    
    Stock10();
    Stock10(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock10();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock10 & topval(const Stock10 & s) const;
    
};


#endif /* Stock10_hpp */
