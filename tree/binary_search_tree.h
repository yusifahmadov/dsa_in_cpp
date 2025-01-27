#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "node.h"

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree(int value);
    bool insert(int value);
    bool contains(int value);
    void BFS();
    void DFSPreOrder(Node *currentNode);
    void DFSPostOrder(Node *currentNode);
    void DFSPreOrder();
    void DFSInOrder(Node *currentNode);
    void DFSInOrder();
    void DFSPostOrder();
};

#endif