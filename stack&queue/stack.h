#ifndef STACK_H
#define STACK_H

#include "../linked_list/node.h"

class Stack
{
    Node *top;
    int height;

public:
    Stack(int value);
    void push(int value);
    int pop();
};

#endif