#include <stack.cpp>
#include <iostream>

using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        Stack *stack = new Stack(s[0]);

        for (int i = 1; i < s.size(); i++)
        {
            stack->push(s[i]);
        }
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
