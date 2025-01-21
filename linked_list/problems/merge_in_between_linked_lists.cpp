#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *mergeInBetween(Node *list1, int a, int b, Node *list2)
    {

        Node *nodeABefore = list1;
        Node *nodeB = list1;
        for (int i = 0; i < a - 1; i++)
        {
            nodeABefore = nodeABefore->next;
        }

        for (int i = 0; i < b; i++)
        {
            nodeB = nodeB->next;
        }

        Node *list2Tail = list2;

        while (list2Tail->next)
        {
            list2Tail = list2Tail->next;
        }

        nodeABefore->next = list2;
        list2Tail->next = nodeB->next;

        return list1;
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList1 = new LinkedList(10);
    LinkedList *linkedList2 = new LinkedList(0);
    Solution *solution = new Solution();
    linkedList1->append(1);
    linkedList1->append(13);
    linkedList1->append(6);
    linkedList1->append(6);
    linkedList1->append(5);
    linkedList2->append(10000);
    linkedList2->append(100001);
    linkedList2->append(100002);

    linkedList1->head = solution->mergeInBetween(linkedList1->getHead(), 3, 4, linkedList2->getHead());

    linkedList1->printList();

    return 0;
}
