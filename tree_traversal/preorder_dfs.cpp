#include <iostream>
#include "../tree/node.cpp"
#include "../tree/binary_search_tree.cpp"
#include <queue>

using namespace std;

void BinarySearchTree::DFSPreOrder(Node *currentNode)
{
    cout << currentNode->value << endl;
    if (currentNode->left)
    {
        DFSPreOrder(currentNode->left);
    }
    if (currentNode->right)
    {
        DFSPreOrder(currentNode->right);
    }
}

void BinarySearchTree::DFSPreOrder()
{
    DFSPreOrder(root);
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
    bft->DFSPreOrder();
    return 0;
}
