#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *sortList(Node *head)
    {

        Node *prev = nullptr;
        Node *current = head;
        Node *checkingNode = head;
        while (current != nullptr)
        {

            while (current->next)
            {
                checkingNode = current->next;

                if (current->next != nullptr && current->value > checkingNode->value)
                {
                    Node *temp = checkingNode->next;
                    checkingNode->next = current;
                    current->next = temp;
                }
            }

            current = current->next;
        }

        return head;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(4);
    Solution *solution = new Solution();
    linkedList->append(2);
    linkedList->append(1);
    linkedList->append(3);

    linkedList->head = solution->sortList(linkedList->getHead());

    linkedList->printList();

    return 0;
}
