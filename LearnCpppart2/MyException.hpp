//
//  MyException.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 04/09/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include <stdio.h>
#include <exception>

using namespace std;

class MyException: public exception {
    public :
    virtual const char* what() const throw() {
        return "Some thing wrong happened";
    }
};

class TestException {
    public  :
    void getException() {
        throw MyException();
    }
};

