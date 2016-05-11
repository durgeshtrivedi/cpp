//
//  Stack.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>

typedef unsigned  long Item;
class Stack
{
private:
    enum{MAX = 10};
    
    Item items[MAX];
    int top;
public:
    bool isEmpty() const;
    bool  isFull() const;
    
    // push return false it stack is already full
    bool push(const Item &);
    
    // pop return false if stach is all ready empty
    
    bool pop(Item &);
    
};

#endif /* Stack_hpp */
