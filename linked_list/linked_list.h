#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList(int value);
    ~LinkedList();

    void printList();
    Node* getHead();
    void getTail();
    void getLength();
    void append(int value);
    void reverse();
};

#endif