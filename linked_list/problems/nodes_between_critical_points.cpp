#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(Node *head)
    {
        Node *prev = head;
        Node *current = head->next;
        Node *after = current->next;
        vector<int> indexVector;
        int index = 1;

        while (after)
        {
            index++;
            if ((current->value > prev->value && current->value > after->value) || (current->value < prev->value && current->value < after->value))
            {
                cout << "Minima: " << index << endl;
                indexVector.push_back(index);
            }

            prev = current;
            current = after;
            after = current->next;
        }

        if (indexVector.size() < 2)
        {
            return {-1, -1};
        }

        int maximumDistance = indexVector[indexVector.size() - 1] - indexVector[0];
        int minimumDistance = 0;
        for (int i = 1; i < indexVector.size(); i++)
        {
            minimumDistance = min(minimumDistance, indexVector[i] - indexVector[i - 1]);
        }
        cout << "Max: " << maximumDistance << endl;
        cout << "Min: " << minimumDistance << endl;
        return {minimumDistance, maximumDistance};
    }
};
int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(6);
    Solution *solution = new Solution();
    linkedList->append(8);
    linkedList->append(4);
    linkedList->append(1);
    linkedList->append(9);
    linkedList->append(6);
    linkedList->append(6);
    linkedList->append(10);
    linkedList->append(6);
    vector<int> result;
    result = solution->nodesBetweenCriticalPoints(linkedList->getHead());
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    linkedList->printList();

    return 0;
}
