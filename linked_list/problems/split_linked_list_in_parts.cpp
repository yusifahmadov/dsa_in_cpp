#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<Node *> splitListToParts(Node *head, int k)
    {

        vector<Node *> splittedNodes;

        int length = 0;

        /// Length calculation
        Node *tempNode = head;
        while (tempNode)
        {
            tempNode = tempNode->next;
            length++;
        }

        /// Calculation of the splitting parts

        int value = length;

        Node *current = head;
        Node *prev = nullptr;
        int part_size = length / k;
        int extra = length % k;
        for (int i = 0; i < k; i++)
        {
            Node *partHead = nullptr;
            int current_part_size = part_size + (extra > 0 ? 1 : 0);
            extra--;

            for (int j = 0; j < current_part_size && current; j++)
            {
                if (partHead == nullptr)
                {
                    partHead = current;
                }
                prev = current;
                current = current->next;
            }
            if (prev != nullptr)
            {
                prev->next = nullptr;
            }
            cout << partHead->next << endl;
            splittedNodes.push_back(partHead);
        }

        return splittedNodes;
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
    linkedList->append(6);
    linkedList->append(7);
    linkedList->append(8);
    linkedList->append(9);
    linkedList->append(10);
    vector<Node *> result;
    result = solution->splitListToParts(linkedList->getHead(), 3);
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++)
    {
        Node *temp = result[i];

        while (temp)
        {
            cout << temp->value << endl;

            temp = temp->next;
        }
    }
    return 0;
}
