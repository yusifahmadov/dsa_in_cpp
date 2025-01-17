#include "doubly_linked_list.h"
#include <iostream>

using namespace std;
DoublyLinkedList::DoublyLinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

void DoublyLinkedList::printList() {
    Node* temp = head;
    while (temp) {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

Node* DoublyLinkedList::getHead() {
    return head;
}

void DoublyLinkedList::getTail() {
    if (tail) {
        std::cout << "Tail: " << tail->value << std::endl;
    } else {
        std::cout << "Tail is nullptr" << std::endl;
    }
}

void DoublyLinkedList::getLength() {
    std::cout << "Length: " << length << std::endl;
}

void DoublyLinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    length++;
}

void DoublyLinkedList::deleteLast() {
    if (length == 0) return;

    Node* temp = tail;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    length--;
}

void DoublyLinkedList::prepend(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    length++;
}

void DoublyLinkedList::deleteFirst() {
    if (length == 0) return;

    Node* temp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    length--;
}

Node* DoublyLinkedList::get(int index) {
    if (index < 0 || index >= length) return nullptr;

    Node* temp;
    if (index < length / 2) {
        temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
    } else {
        temp = tail;
        for (int i = length - 1; i > index; i--) {
            temp = temp->prev;
        }
    }
    return temp;
}

bool DoublyLinkedList::set(int index, int value) {
    Node* temp = get(index);
    if (temp) {
        temp->value = value;
        return true;
    }
    return false;
}

bool DoublyLinkedList::insert(int index, int value) {
    if (index < 0 || index > length) return false;

    if (index == 0) {
        prepend(value);
        return true;
    }
    if (index == length) {
        append(value);
        return true;
    }

    Node* newNode = new Node(value);
    Node* temp = get(index - 1);

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;

    length++;
    return true;
}

void DoublyLinkedList::deleteNode(int index) {
    if (index < 0 || index >= length) return;

    if (index == 0) {
        deleteFirst();
        return;
    }
    if (index == length - 1) {
        deleteLast();
        return;
    }

    Node* temp = get(index);

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
    length--;
}
