#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *mergeNodes(Node *head)
    {
        Node *sumNodeHead = new Node(0);
        Node *sumNodeTail = sumNodeHead;
        Node *loop = head;

        Node *current = head;

        while (current->next)
        {

            if (current->value == 0)
            {
                Node *temp = current->next;
                int sum = 0;
                while (temp)
                {

                    sum = sum + temp->value;

                    temp = temp->next;
                    if (temp->value == 0)
                        break;
                }
                Node *newNode = new Node(sum);

                sumNodeTail->next = newNode;
                sumNodeTail = newNode;
            }

            current = current->next;
        }

        sumNodeHead = sumNodeHead->next;

        return sumNodeHead;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(0);
    Solution *solution = new Solution();
    linkedList->append(3);
    linkedList->append(1);
    linkedList->append(0);
    linkedList->append(4);
    linkedList->append(5);
    linkedList->append(2);
    linkedList->append(0);

    linkedList->head = solution->mergeNodes(linkedList->getHead());

    linkedList->printList();

    return 0;
}
