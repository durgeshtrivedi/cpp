//
//  Queue.hpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <cstdlib> 
#include "Customer.hpp"
typedef Customer Item;

class Queue
{
    
private:
    struct Node{Item item;struct Node *next;};
    enum{Q_Size = 10};
    Queue(const Queue &q) :qsize(0){};
    Queue & operator=(const Queue &q) {return *this;};
    
    const int qsize;
    Node *front;
    Node *rear;
    int itemcount;
public:
    Queue(int qs = Q_Size);
    ~Queue();
    bool isEmpty() ;
    bool isFull()  ;
    int queconst() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
    int queuecount() const;
    void set1(long when);
};



#endif /* Queue_hpp */
