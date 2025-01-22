#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *swapPairs(Node *head)
    {
        if (!head || !head->next)
            return head;
        Node *pair1 = head;
        Node *beforePair1 = nullptr;
        Node *pair2 = head->next;
        head = pair2;
        while (pair1 && pair2)
        {

            Node *tmp = pair2->next;

            pair2->next = pair1;
            pair1->next = tmp;

            if (beforePair1 != nullptr)
            {
                beforePair1->next = pair2;
            }

            beforePair1 = pair1;
            pair1 = tmp;
            if (pair1 != nullptr)
            {
                pair2 = pair1->next;
            }
            else
            {
                pair2 = nullptr;
            }
        }
        // if (beforePair1 != nullptr)
        // {
        //     beforePair1->next = pair1;
        // }

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

    linkedList->head = solution->swapPairs(linkedList->getHead());

    linkedList->printList();

    return 0;
}
