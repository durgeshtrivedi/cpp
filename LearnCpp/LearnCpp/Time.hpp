//
//  Time.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <ostream>


class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    Time operator+(const Time & t) const;
    void Show() const;
    friend Time operator*(double val,const Time &);
    friend void operator<<(std::ostream &os,const Time&);

};

#endif /* Time_hpp */
