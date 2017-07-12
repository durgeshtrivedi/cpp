//
//  Stock.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 23/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "Mainheader.hpp"


Stock1:: Stock1() { // default constructor
    
    cout << "Default constructor called\n";
    company = "NO name";
    shares = 0;
    share_value = 0.0;
    total_value = 0;
}

Stock1::Stock1(const string &co, long n, double pr) {
    cout << "Default constructor called\n";
    
    company = co;
    
    if(n<0) {
        
        std::cout << "Number of shares can’t be negative; "
        << company << " shares set to 0.\n";
        shares = 0;
        
    } else {

        shares = n;
    }
    share_value = pr;
    set_tot();
}

Stock1 :: ~Stock1 () {
    cout << "Bye, " << company << "!\n";
}

void Stock1:: acquire(const string &co, long n, double pr) {
    
    company = co;
    if(n<0) {
        
        std::cout << "Number of shares can’t be negative; "
        << company << " shares set to 0.\n";
        shares = 0;
    } else {
        
        shares = n;
        share_value = pr;
        set_tot();
    }
}

void Stock1:: buy(long num, double price) {
    
    if (num < 0) {
        
        std::cout << "Number of shares purchased can’t be negative. "
        << "Transaction is aborted.\n";
    } else {
        
        shares+= num;
        share_value = price;
        set_tot();
    }
}

void Stock1:: sell(long num, double price) {
    
    if (num < 0) {
        cout << "Number of shares sold can’t be negative. "
        << "Transaction is aborted.\n";
    } else if (num > shares){
        
        cout << "You can’t sell more than you have! "
        << "Transaction is aborted.\n";
    } else {
        
        shares-= num;
        share_value = price;
        set_tot();
    }
}

void Stock1:: update(double price) {
    
    share_value = price;
    set_tot();
}

void Stock1:: show() const {
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base:: floatfield);
    
    std::streamsize prec = cout.precision(3);
    
    
    
    cout << "Company: " << company
      << " Share Price: $" << share_value;
    // set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_value << '\n';
    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock1 & Stock1:: topal(const Stock1 &s) const {
    
    if  (s.total_value > total_value) { return s;} else  return *this;
}
