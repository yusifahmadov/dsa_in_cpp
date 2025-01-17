#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "node.h"
#include <iostream>

class DoublyLinkedList {
private:
    Node* tail;  // Pointer to the tail of the list
    int length;  // Length of the list

public:
    Node* head;  // Pointer to the head of the list

    // Constructor
    DoublyLinkedList(int value);

    // Member functions
    void printList();
    Node* getHead();
    void getTail();
    void getLength();
    void append(int value);
    void deleteLast();
    void prepend(int value);
    void deleteFirst();
    Node* get(int index);
    bool set(int index, int value);
    bool insert(int index, int value);
    void deleteNode(int index);
};

#endif // DOUBLY_LINKED_LIST_H
