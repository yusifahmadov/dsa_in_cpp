#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *deleteDuplicates(Node *head)
    {
        Node *dummy = new Node(0);
        dummy->next = head;
        head = dummy;
        Node *before = head;
        Node *current = head->next;
        Node *currentNodeTail = nullptr;
        Node *after = nullptr;

        while (current)
        {

            after = current->next;

            if (after != nullptr && current->value == after->value)
            {
                currentNodeTail = current;

                while (currentNodeTail->next != nullptr && currentNodeTail->value == currentNodeTail->next->value)
                {

                    currentNodeTail = currentNodeTail->next;
                }

                before->next = currentNodeTail->next;

                currentNodeTail->next = nullptr;

                current = before->next;

                if (current != nullptr)
                {

                    after = current->next;
                }
                else
                {
                    after = nullptr;
                }
            }
            else
            {

                before = current;
                current = current->next;
            }
        }
        head = head->next;
        return head;
    }
};

int main(int argc, char const *argv[])
{

    LinkedList *linkedList = new LinkedList(1);
    Solution *solution = new Solution();
    linkedList->append(1);
    linkedList->append(1);
    linkedList->append(2);
    linkedList->append(2);
    linkedList->append(3);
    linkedList->append(4);

    linkedList->head = solution->deleteDuplicates(linkedList->getHead());

    linkedList->printList();
    return 0;
}
