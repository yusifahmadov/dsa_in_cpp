#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> nextLargerNodes(Node *head)
    {
        Node *dummy = new Node(0);
        dummy->next = head;
        head = dummy;
        Node *prev = head;
        Node *current = head->next;

        vector<int> result;

        while (current)
        {

            Node *temp = current;
            int nextGreater = 0;
            while (temp)
            {

                if (temp->value > current->value)
                {
                    nextGreater = temp->value;
                    break;
                }

                temp = temp->next;
            }

            result.push_back(nextGreater);

            current = current->next;
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(2);
    Solution *solution = new Solution();
    linkedList->append(7);
    linkedList->append(4);
    linkedList->append(3);
    linkedList->append(5);
    vector<int> result;
    result = solution->nextLargerNodes(linkedList->getHead());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    linkedList->printList();

    return 0;
}
