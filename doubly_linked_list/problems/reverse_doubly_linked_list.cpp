#include <iostream>
#include "../doubly_linked_list.cpp"
#include "../node.cpp"

class Solution
{
public:
    Node *reverse(Node *head)
    {

        while (head->prev)
        {
            Node *prev = head->prev;

            head->prev = head->next;
            head->next = prev;

            head = head->prev;
        }

        head->prev = head->next;
        head->next = nullptr;

        return head; // Return the new head of the reversed list
    }
};

int main(int argc, char const *argv[])
{
    DoublyLinkedList *linkedList = new DoublyLinkedList(2);
    Solution *solution = new Solution();
    linkedList->append(2);
    linkedList->append(3);
    linkedList->append(4);

    linkedList->head = solution->reverse(linkedList->getHead());

    linkedList->printList();

    return 0;
}
