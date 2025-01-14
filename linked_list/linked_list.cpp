#include "linked_list.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::printList() {
    Node* temp = head;
    while (temp) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

Node* LinkedList::getHead() {
    return head;
}

void LinkedList::getTail() {
    if (tail) {
        cout << "Tail: " << tail->value << endl;
    } else {
        cout << "Tail is nullptr" << endl;
    }
}

void LinkedList::getLength() {
    cout << "Length: " << length << endl;
}

void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::reverse() {
    if (!head || !head->next) {
        return;
    }

    Node* temp = head;
    head = tail;
    tail = temp;

    Node* before = nullptr;
    Node* after = nullptr;

    for (int i = 0; i < length; i++) {
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }
}

