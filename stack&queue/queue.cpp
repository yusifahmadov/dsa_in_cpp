#include "queue.h"
#include <iostream>
#include <climits>

Queue::Queue(int value)
{
    Node *newNode = new Node(value);
    first = newNode;
    last = newNode;
    length = 1;
}

void Queue::enqueue(int value)
{
    Node *newNode = new Node(value);

    if (length == 0)
    {
        first = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }
    length++;
}

int Queue::dequeue()
{
    if (length == 0)
        return INT_MIN;
    int dequeuedValue = first->value;
    if (length == 1)
    {
        first = nullptr;
        last = nullptr;
    }
    else
    {
        Node *temp = first;
        first = first->next;

        delete temp;
    }
    length--;
    return dequeuedValue;
}