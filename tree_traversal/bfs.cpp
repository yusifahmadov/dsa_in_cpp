#include <iostream>
#include "../tree/node.cpp"
#include "../tree/binary_search_tree.cpp"
#include <queue>

using namespace std;

void BinarySearchTree::BFS()
{
    queue<Node *> myQueue;
    myQueue.push(root);

    while (myQueue.size() > 0)
    {
        Node *currentNode = myQueue.front();
        myQueue.pop();
        cout << currentNode->value << endl;

        if (currentNode->left != nullptr)
        {
            myQueue.push(currentNode->left);
        }

        if (currentNode->right != nullptr)
        {
            myQueue.push(currentNode->right);
        }
    }
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
    bft->BFS();
    return 0;
}
