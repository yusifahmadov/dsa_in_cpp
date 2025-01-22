#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *partition(Node *head, int x)
    {
        Node *leftNode = new Node(0);
        Node *rightNode = new Node(0);

        Node *leftNodeHead = leftNode;
        Node *leftNodeTail = leftNode;
        Node *rightNodeHead = rightNode;
        Node *rightNodeTail = rightNodeHead;

        Node *temp = head;

        while (temp)
        {

            if (temp->value < x)
            {
                leftNodeTail->next = new Node(temp->value);
                leftNodeTail = leftNodeTail->next;
            }
            else
            {
                rightNodeTail->next = new Node(temp->value);
                rightNodeTail = rightNodeTail->next;
            }

            temp = temp->next;
        }
        rightNodeHead = rightNodeHead->next;

        leftNodeTail->next = rightNodeHead;
        leftNodeHead = leftNodeHead->next;
        temp = leftNodeHead;

        while (temp)
        {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
        return leftNodeHead;
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(1);
    Solution *solution = new Solution();
    linkedList->append(1);
    linkedList->head = solution->partition(linkedList->getHead(), 0);

    linkedList->printList();

    return 0;
}
