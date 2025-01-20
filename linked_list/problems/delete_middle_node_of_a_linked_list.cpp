#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *deleteMiddle(Node *head)
    {
        Node *temp = head;
        int length = 0;
        while (temp)
        {
            length++;

            temp = temp->next;
        }
        cout << length / 2 << endl;
        Node *slow = head;
        Node *fast = head;

        for (int i = 0; i < (length / 2) + (length % 2 == 0 ? 0 : 1); i++)
        {
            if (fast->next == nullptr)
            {
                continue;
            }
            fast = fast->next;
        }
        Node *beforeSlow = nullptr;
        while (fast)
        {
            beforeSlow = slow;
            slow = slow->next;
            fast = fast->next;
        }

        if (beforeSlow->next == nullptr)
        {
            return nullptr;
        }
        beforeSlow->next = slow->next;
        delete slow;

        return head;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(1);
    Solution *solution = new Solution();

    linkedList->head = solution->deleteMiddle(linkedList->getHead());

    linkedList->printList();

    return 0;
}
