#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *reorderList(Node *head)
    {
        Node *temp = head;

        int length = 0;
        while (temp)
        {

            temp = temp->next;
            length++;
        }
        Node *current = head;
        Node *end = head;
        Node *beforeEnd = end;
        for (int i = 0; i < (length / 2.0) - 1; i++)
        {
            cout << (length / 2.0) << endl;
            while (end->next)
            {
                beforeEnd = end;
                end = end->next;
            }

            cout << end->value << endl;
            Node *current_next = current->next;
            current->next = end;

            end->next = current_next;

            beforeEnd->next = nullptr;

            current = current_next;
            end = current;
        }

        return head;
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList1 = new LinkedList(1);
    Solution *solution = new Solution();
    linkedList1->append(2);
    linkedList1->append(3);
    linkedList1->append(4);
    linkedList1->append(5);

    linkedList1->head = solution->reorderList(linkedList1->getHead());
    linkedList1->printList();

    return 0;
}
