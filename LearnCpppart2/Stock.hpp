//
//  Stock.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 23/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef Stock_hpp
#define Stock_hpp

#include <stdio.h>
#include "stdheader.hpp"

class Stock1 {

private:
    string company;
    long shares;
    double share_value;
    double total_value;
    void set_tot(){total_value = shares * share_value;}
    
public:
    
    void acquire(const string &co, long n, double pr);
    Stock1(); // default constructor
    Stock1(const string &co, long n = 0, double pr = 0.0 );
    ~Stock1();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock1 &topal(const Stock1 &s) const;
    
};

#endif /* Stock_hpp */
