#include "binary_search_tree.h"

BinarySearchTree::BinarySearchTree(int value)
{
    Node *newNode = new Node(value);
    root = newNode;
}

bool BinarySearchTree::insert(int value)
{
    Node *newNode = new Node(value);
    if (root == nullptr)
    {
        root = newNode;
        return true;
    }
    Node *loop = root;

    while (true)
    {
        if (newNode->value == loop->value)
            return false;

        if (value < loop->value)
        {
            if (loop->left == nullptr)
            {
                loop->left = newNode;
                return true;
            }
            loop = loop->left;
        }
        else
        {
            if (loop->right == nullptr)
            {
                loop->right = newNode;
                return true;
            }
            loop = loop->right;
        }
    }
    return true;
}

bool BinarySearchTree::contains(int value)
{
    if (root == nullptr)
        return false;

    Node *temp = root;

    while (temp)
    {
        if (value < temp->value)
        {
            temp = temp->left;
        }
        else if (value > temp->value)
        {
            temp = temp->right;
        }
        else
        {
            return true;
        }
    }

    return false;
}