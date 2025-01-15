#include "node.h"
#include <iostream>
Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
    this -> prev = nullptr;
}