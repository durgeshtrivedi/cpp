//
//  Stack.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 21/04/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "Stack.hpp"

bool Stack::isEmpty() const
{
    return top == 0;
}

bool Stack::isFull() const
{
    return top == MAX;
}

bool Stack:: push(const Item & item)
{
    if (isFull() == false) {
        items[top++] = item;
        return false;
    }
    return true;
}

bool Stack:: pop(Item & item) 
{
    if (isEmpty() == false) {
        item = items[--top];
        return true;
    }
    
    return false;
}