//
//  operatorOverloading.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 25/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef operatorOverloading_hpp
#define operatorOverloading_hpp

#include "stdheader.hpp"

class Times {
    
private:
    
    long hours;
    int minutes;
public:
    Times();
    Times(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Times operator+(const Times & t) const;
    Times operator-(const Times &t) const;
    Times  operator*(double mult) const;
    
    friend Times operator*(double m, Times &t) {
        return t* m;
    }
    
    friend ostream & operator<< (ostream &os, const Times &t);
    
    
    void Show() const;
    
};


#endif /* operatorOverloading_hpp */
