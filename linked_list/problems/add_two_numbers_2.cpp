#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *addTwoNumbers(Node *l1, Node *l2)
    {
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList1 = new LinkedList(7);
    LinkedList *linkedList2 = new LinkedList(4);
    Solution *solution = new Solution();
    linkedList1->append(2);
    linkedList1->append(4);
    linkedList1->append(3);
    linkedList2->append(6);
    linkedList2->append(4);

    linkedList1->head = solution->addTwoNumbers(linkedList1->getHead(), linkedList2->getHead());
    linkedList1->printList();

    return 0;
}
