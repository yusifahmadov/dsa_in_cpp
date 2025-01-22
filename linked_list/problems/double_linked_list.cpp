#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *doubleIt(Node *head)
    {

        /// Reverse head

        Node *before = nullptr;
        Node *current = head;
        Node *after = nullptr;

        while (current)
        {
            after = current->next;
            current->next = before;
            before = current;
            current = after;
        }
        head = before;

        Node *temp = head;

        bool oneWillBeAdded = false;
        int nodeValue = 0;

        Node *tempHead = new Node(0);
        Node *tempTail = tempHead;

        while (temp)
        {
            nodeValue = ((temp->value * 2) % 10) + (oneWillBeAdded ? 1 : 0);
            Node *newNode = new Node(nodeValue);
            tempTail->next = newNode;
            tempTail = newNode;
            oneWillBeAdded = false;

            if ((temp->value * 2) > 9)
            {
                oneWillBeAdded = true;
            }
            if (oneWillBeAdded && temp->next == nullptr)
            {
                Node *newNode2 = new Node((temp->value * 2) / 10);
                tempTail->next = newNode2;
                tempTail = newNode2;
            }

            temp = temp->next;
        }
        head = tempHead;
        head = head->next;
        before = nullptr;
        current = head;
        after = nullptr;

        while (current)
        {
            after = current->next;
            current->next = before;
            before = current;
            current = after;
        }
        head = before;
        return head;
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(9);
    Solution *solution = new Solution();
    linkedList->append(9);
    linkedList->append(9);

    linkedList->head = solution->doubleIt(linkedList->getHead());

    linkedList->printList();

    return 0;
}
