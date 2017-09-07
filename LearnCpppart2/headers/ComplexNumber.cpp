//
//  ComplexNumber.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 07/09/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "ComplexNumber.hpp"

namespace ComplexNumbering {
    
    ComplexNumber :: ComplexNumber():realNumber(0),complexNumber(0) {
    }
    
    ComplexNumber :: ComplexNumber(double realNumber, double complexNumber):realNumber(realNumber),complexNumber(complexNumber) {
    }
    
    ComplexNumber ::ComplexNumber(const ComplexNumber & number) {
        realNumber = number.realNumber;
        complexNumber = number.complexNumber;
    }
    
    const ComplexNumber& ComplexNumber ::  operator=(const ComplexNumber & number ) {
        *this = number;
        return *this;
    }
    
    ostream& operator<<(ostream &out, const ComplexNumber &number) {
        out << "(" <<number.realNumber << "," << number.complexNumber << ")" << endl;
        return out;
    }
    
};
