#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;
class Solution
{
public:
    int pairSum(Node *head)
    {
        vector<int> twinSums1;

        int maxSum = 0;
        int n = 0;

        Node *temp = head;

        while (temp)
        {
            twinSums1.push_back(temp->value);
            temp = temp->next;
        }
        vector<int> twinSums2 = twinSums1;
        reverse(twinSums2.begin(), twinSums2.end());

        for (int i = 0; i < twinSums1.size(); i++)
        {

            if (maxSum < twinSums1[i] + twinSums2[i])
            {
                maxSum = twinSums1[i] + twinSums2[i];
            }
        }

        return maxSum;
    }
};

int main(int argc, char const *argv[])
{

    LinkedList *linkedList = new LinkedList(5);
    Solution *solution = new Solution();
    linkedList->append(4);
    linkedList->append(2);
    linkedList->append(1);

    int result = solution->pairSum(linkedList->getHead());

    cout << result << endl;

    linkedList->printList();

    return 0;
}
