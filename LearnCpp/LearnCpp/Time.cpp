//
//  Time.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "Time.hpp"
#include <iostream>


Time::Time()
{
    hours = minutes = 0;
}
Time::Time(int h, int m )
{
    hours = h;
    minutes = m;
}
void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHr(int h)
{
    hours += h;
}
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator*(double mult,const Time &t)
{
    Time result;
    long totalminutes = t.hours * mult * 60 +t. minutes * mult;
    result.hours = totalminutes / 60;
    
    result.minutes = totalminutes % 60;
    return result;
}

void operator<<(std::ostream &os,const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
}


