#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, Node *head)
    {

        vector<vector<int>> matrix;
        for (int i = 0; i < m; i++)
        {
            matrix.push_back({});
            for (int j = 0; j < n; j++)
            {
                matrix[i].push_back(-1);
            }
        }

        int left = 0;
        int right = n - 1;
        int top = 0;
        int down = m - 1;
        int direction = 0;
        Node *temp = head;
        while (temp)
        {

            if (direction == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    matrix[top][i] = temp->value;

                    temp = temp->next;
                    if (!temp)
                        break;
                }
                top++;
            }

            else if (direction == 1)
            {
                for (int i = top; i <= down; i++)
                {

                    matrix[i][right] = temp->value;
                    temp = temp->next;
                    if (!temp)
                        break;
                }

                right--;
            }

            else if (direction == 2)
            {

                for (int i = right; i >= left; i--)
                {

                    matrix[down][i] = temp->value;
                    temp = temp->next;
                    if (!temp)
                        break;
                }
                down--;
            }
            else if (direction == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    matrix[i][left] = temp->value;
                    temp = temp->next;
                    if (!temp)
                        break;
                }
                left++;
            }

            direction = (direction + 1) % 4;
        }

        return matrix;
    }
};

int main(int argc, char const *argv[])
{
    LinkedList *linkedList = new LinkedList(3);
    Solution *solution = new Solution();
    linkedList->append(0);
    linkedList->append(2);
    linkedList->append(6);
    linkedList->append(8);
    linkedList->append(1);
    linkedList->append(7);
    linkedList->append(9);
    linkedList->append(4);
    linkedList->append(2);
    linkedList->append(5);
    linkedList->append(5);
    linkedList->append(0);
    vector<vector<int>> result;
    result = solution->spiralMatrix(3, 5, linkedList->getHead());

    linkedList->printList();

    return 0;
}
