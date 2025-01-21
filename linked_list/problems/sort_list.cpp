#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *sortList(Node *head)
    {
        }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(0);
    Solution *solution = new Solution();
    linkedList->append(1);
    linkedList->append(2);

    linkedList->head = solution->sortList(linkedList->getHead());

    linkedList->printList();

    return 0;
}
