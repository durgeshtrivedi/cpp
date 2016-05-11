//
//  Usetime.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 26/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include "Time.hpp"
#include  <iostream>

int main10();
//int main()
//{
//    main10();
//}
int main10()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "planning time = ";
    planning.Show();
    cout << endl;
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    total = coding.Sum(fixing);
    //operator overloading
    total = coding + fixing;
    
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    
    cout << coding;
    return 0;
}