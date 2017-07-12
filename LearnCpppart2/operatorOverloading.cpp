//
//  operatorOverloading.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 25/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "operatorOverloading.hpp"


Times:: Times () {
    hours = minutes = 0;
}

Times:: Times (int h, int m) {
    hours = h;
    minutes = m;
}

void Times:: AddHr(int h) {
    hours+=h;
}

void Times:: AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Times::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Times Times :: operator+(const Times &t) const {
    Times sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

Times Times::operator-(const Times & t) const
{
    Times diff;
    long tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}
Times Times::operator*(double mult) const
{
    Times result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

void Times::Show() const
{
    cout << hours << " hours, " << minutes << " minutes";
}

 ostream & operator<< (ostream &os, const Times &t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
