#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    Node *insertGreatestCommonDivisors(Node *head)
    {

        Node *prev = head;
        Node *current = head->next;
        int greatestDivisor = 0;
        while (current)
        {

            for (int i = 1; i < prev->value + 1; i++)
            {

                if (prev->value % i == 0 && current->value % i == 0)
                {

                    greatestDivisor = i;
                }
            }
            Node *newNode = new Node(greatestDivisor);
            prev->next = newNode;
            newNode->next = current;
            prev = current;
            current = current->next;
        }
        cout << greatestDivisor << endl;

        return head;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(18);
    Solution *solution = new Solution();
    linkedList->append(6);
    linkedList->append(10);
    linkedList->append(3);

    linkedList->head = solution->insertGreatestCommonDivisors(linkedList->getHead());

    linkedList->printList();

    return 0;
}
