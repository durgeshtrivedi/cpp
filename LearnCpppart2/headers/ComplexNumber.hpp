//
//  ComplexNumber.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 07/09/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp

#include <ostream>

using namespace std;
namespace ComplexNumbering {
    
    class ComplexNumber {
    public:
        
        double realNumber;
        double complexNumber;
        
        ComplexNumber();
        ComplexNumber(double realNumber, double complexNumber);
        
        //copy constructor
        ComplexNumber(const ComplexNumber & number);
        
        // overload assignment operator
        const ComplexNumber& operator=(const ComplexNumber & number );
        
        // shift operator overload using friend
        friend ostream& operator<<(ostream &out, const ComplexNumber &number);
        
    };
};
#endif /* ComplexNumber_hpp */
