//
//  LambadaExpression.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 25/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <functional>
const long Size1 = 39L;
const long Size2 = 100*Size1;
const long Size3 = 100*Size2;

bool f3(int x) {return x % 3 == 0;}
bool f13(int x) {return x % 13 == 0;}

double dub(double x) {return 2.0*x;}
double square(double x) {return x*x;}

using namespace std;

template <typename T,typename F>
T use_f(T v, F f)
{
    static int count = 0 ;
    count++;
    std::cout << " use_f count = " << count
    << ", &count = " << &count << std::endl;
    
    return f(v);
}

class Fp
{
private:
    double z_;
public:
    Fp(double z = 1.0) : z_(z) {}
    double operator()(double p) { return z_*p; }
    
};

class Fq
{
private:
    double z_;
public:
    Fq(double z = 1.0) : z_(z) {}
    double operator()(double q) { return z_+ q; }
};

void lambadamExpression();


int main203()
{
    lambadamExpression();
    return 0;
}

int main301()
{
    using std::cout;
    using std::endl;
    
    double y = 1.21;
    cout << "Function pointer dub:\n";
    cout << " " << use_f(y, dub) << endl;
    cout << "Function pointer square:\n";
    cout << " " << use_f(y, square) << endl;
    cout << "Function object Fp:\n";
    cout << " " << use_f(y, Fp(5.0)) << endl;
    cout << "Function object Fq:\n";
    cout << " " << use_f(y, Fq(5.0)) << endl;
    cout << "Lambda expression 1:\n";
    
    cout << " "  << use_f(y, [](double u ){return u*u;} )<< endl;
    cout << "Lambda expression 2:\n";
    cout << " " << use_f(y, [](double u) {return u+u/2.0;}) << endl;
    
    std::function<double(double)> ef1 = dub;
    
    std::function<double(double)> ef2 = square;
    
    std::function<double(double)> ef3 = Fq(2.0);
    
    std::function<double(double)> ef4 = [](double n) {return n*n;};
    
    std::function<double(double)> ef5 = [](double n) {return n*n/10;};
    
    std::function<double(double)> ef6 = Fp(4.9);
    
    cout << "Function pointer dub:\n";
    cout << " " << use_f(y, ef1) << endl;
    cout << "Function pointer square:\n";
    cout << " " << use_f(y, ef2) << endl;
    cout << "Function object Fp:\n";
    cout << " " << use_f(y, ef3) << endl;
    cout << "Function object Fq:\n";
    cout << " " << use_f(y, ef4) << endl;
    cout << "Lambda expression 1:\n";
    cout << " " << use_f(y, ef5) << endl;
    cout << "Lambda expression 2:\n";
    cout << " " << use_f(y,ef6) << endl;
    return 0;
    
    
    
    return 0;
}

int main201()
{
    using std::cout;
    std::vector<int> numbers(Size1);
 
    std::srand(std::time(0));
    
    std::generate(numbers.begin(), numbers.end(), std::rand);
    // using function pointer
    cout << "Sample size = " << Size1 << '\n';
    
    int count3 = std::count_if(numbers.begin(), numbers.end(), f3);
    
    
    cout << "Count of numbers divisible by 3: " << count3 << '\n';
    int count13 = std::count_if(numbers.begin(), numbers.end(), f13);
    cout << "Count of numbers divisible by 13: " << count13 << "\n\n";
    
    
    numbers.resize(Size2);
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Sample size = " << Size2 << '\n';
    // using a functor
    
    
    //using factor
    
    class f_mod
    {
    private:
        int dv;
        public :
        
        f_mod(int d =1) :dv(d) {};
        bool operator()(int x) { return x% dv == 0;}
    };
    
    count3 = std::count_if(numbers.begin(), numbers.end(), f_mod(3));

    cout << "Count of numbers divisible by 3: " << count3 << '\n';
    count13 = std::count_if(numbers.begin(), numbers.end(), f_mod(13));
    cout << "Count of numbers divisible by 13: " << count13 << "\n\n";
    
    
    // increase number of numbers again
    numbers.resize(Size3);
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Sample size = " << Size3 << '\n';
    
    // using lambada
    
    count3 = std::count_if(numbers.begin(), numbers.end(), [](int x){ return x% 3;});
    
    cout << "Count of numbers divisible by 3: " << count3 << '\n';
    
    count13 = std::count_if(numbers.begin(), numbers.end(),
                            [](int x){return x % 13 == 0;});
    cout << "Count of numbers divisible by 13: " << count13 << '\n';
    
    return 0;
}

void lambadamExpression()
{
    int sum =0;
    
    std::vector<int> values {1,2,3,4,5,6,7,8,9};
    
    
    for(auto val : values)
    {
        [&]() {sum = sum +val;}();
    }
    
    
    cout << "SUM of numbers " << sum << endl;
    
    
}

