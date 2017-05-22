//
//  FunctionPointer.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 17/05/17.
//  Copyright © 2017 durgesh. All rights reserved.
//

#include "FunctionPointer.hpp"




void functionPointer() {
    
    int code;
    cout.clear();
    cout << "How many line of code do you need" << endl;
    cin >> code;
    
    cout << "Here is the Betsy estimate" << endl;
    estimates(code, betsys);
    
    cout << "Here is the Pam estimate" << endl;
    estimates(code, pam);
    
}

double betsys(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimates(int lines, double(*pt)(int)) {

    cout << lines << "Lines will take " << endl;
    
    cout << (*pt)(lines) << "hour's" << endl;
}

// variation notation, same signature

const double *f1(const double ar[],  int n);
const double *f2(const double [], int n);
const double *f3(const double *, int n);



void functionPointerExample() {
    
    double av[3] = {101.2, 102.3, 103.4};
    
    // pointer to a function
    
    const double *(*p1)(const double*, int) = f1;
    
    auto p2 = f2; // c++11 auto conversion
    
    cout << "Using pointer to function" << endl;
    cout << "Address values " << endl;
    
    cout << (*p1)(av,3) << " : " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << " : " << *p2(av, 3) << endl;
    
    
    // Pa is an array of pointers an auto doesn't work with  list initilization
    const double *(*pa[3]) (const double *ar, int) = {f1, f2, f3};
    
    // But it does work for initilization to a single value
    // pd a pointer  to first element of pa
    auto pd = pa;
    
    //Pre c++11 can us the following code
    
   // const double *(**pd) (const double *ar, int n) = pa
    
    cout << "Using array of pointer to function" << endl;
    cout << "Address values " << endl;
    
    for (int i = 0; i<3; i++) {
        cout << pa[i] (av, 3) << " : " << *pa[i] (av, 3) << endl;
    }
    
    // what about a pointer to an array of function pointers
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << " Address Value\n";
    // easy way to declare pc
    auto pc = &pa;
    // pre-C++11 can use the following code instead
    
    // const double *(*(*p1)[3])(const double *, int n) =  &pa
    
    const double *(*(*pe)[3]) (const double*, int n) = &pa;
    
    // store return value
    
    const double *pdb = (*pe)[1] (av, 3);
    
    cout << pdb << " : " << *pdb << endl;
    
    // alternate notation
    
    cout << (*(*pe)[2]) (av, 3) << " : " <<  *(*(*pe)[2])(av, 3) << endl;
    

}

const double *f1(const double *ar, int n) {
    return ar;
}

const double *f2(const double ar[], int n) {
    
    return ar+1;
}

const double *f3(const double ar[], int n) {
    
    return ar+2;
}
