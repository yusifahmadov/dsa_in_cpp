#include <iostream>
#include "../tree/node.cpp"
#include "../tree/binary_search_tree.cpp"
#include <queue>

using namespace std;

void BinarySearchTree::DFSPostOrder(Node *currentNode)
{

    if (currentNode->left)
    {
        DFSPostOrder(currentNode->left);
    }

    if (currentNode->right)
    {
        DFSPostOrder(currentNode->right);
    }
    cout << currentNode->value << endl;
}

void BinarySearchTree::DFSPostOrder()
{
    DFSPostOrder(root);
}

int main(int argc, char const *argv[])
{
    BinarySearchTree *bft = new BinarySearchTree(47);
    bft->insert(21);
    bft->insert(76);
    bft->insert(18);
    bft->insert(27);
    bft->insert(52);
    bft->insert(82);
    bft->DFSPostOrder();
    return 0;
}
