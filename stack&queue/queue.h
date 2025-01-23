#ifndef QUEUE_H
#define QUEUE_H

#include "../linked_list/node.h"

class Queue
{
    Node *first;
    Node *last;
    int length;

public:
    Queue(int value);
    void enqueue(int value);
    int dequeue();
};

#endif