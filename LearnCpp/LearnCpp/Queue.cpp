//
//  Queue.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 11/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include "Queue.hpp"


Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    itemcount = 0;

}

bool Queue::isEmpty()
{
    return itemcount == 0;
}

bool Queue::isFull() 
{
    return itemcount == qsize;
}
int Queue::queuecount() const
{
    return itemcount;
}

// Add item to queue
bool Queue::enqueue(const Item & item) 
{
    if (isFull())
        return false;
    Node * add = new Node; // create node
    // on failure, new throws std::bad_alloc exception
    add->item = item; // set node pointers
    add->next = NULL; // or nullptr;
    itemcount++;
    if (front == NULL) // if queue is empty,
        front = add; // place item at front
    else
        rear->next = add; // else place at rear
    rear = add; // have rear point to new node
    return true;
}
bool Queue::dequeue(Item &item)
{
    if (front == nullptr) {
        return false;
    }
    item = front->item;
    itemcount--;
    Node *temp = front;
    front =front->next;
    delete temp;
    if (itemcount == 0) {
        rear = nullptr;
    }
    
    return true;
    
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL) // while queue is not yet empty
    {
        temp = front; // save address of front item
        front = front->next;// reset pointer to next item
        delete temp; // delete former front
    }
}

//void Customer::set1(long when)
//{
//    processtime = std::rand() % 3 + 1;
//    arrive = when;
//}

