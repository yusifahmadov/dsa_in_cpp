#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *reverseKGroup(Node *head, int k)
    {
        int length = 0;
        Node *temp = head;

        while (temp)
        {
            temp = temp->next;
            length++;
        }

        int value = length;
        Node *begin = head;
        Node *end = head;
        Node *beforeEnd = nullptr;
        while (value >= k)
        {

            for (int i = 0; i < k - 1; i++)
            {
                end = end->next;
            }

            Node *endNext = end->next;
            end->next = nullptr;

            Node *before = nullptr;
            Node *current = begin;
            Node *after = nullptr;

            while (current)
            {
                after = current->next;
                current->next = before;
                before = current;
                current = after;
            }

            if (beforeEnd != nullptr)
            {
                beforeEnd->next = before;
            }
            else
            {
                head = before;
            }

            beforeEnd = begin;

            begin = endNext;
            end = endNext;
            value = value - k;
        }
        if (beforeEnd != nullptr)
        {
            beforeEnd->next = begin;
        }

        return head;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(1);
    Solution *solution = new Solution();
    linkedList->append(2);
    linkedList->append(3);
    linkedList->append(4);
    linkedList->append(5);

    linkedList->head = solution->reverseKGroup(linkedList->getHead(), 2);

    linkedList->printList();

    return 0;
}
