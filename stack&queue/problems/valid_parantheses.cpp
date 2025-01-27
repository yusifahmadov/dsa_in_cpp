#include <stack.cpp>
#include <iostream>

using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {

       stack<char> v_stack;


        for(char c: s){
            if(c == '(' || c == '[' || c=='{'){
                v_stack.push(c);
            }else if(c == ')' ){
                if(v_stack.empty() || (v_stack.top() != '(')){
                    return false;
                }else{
                    v_stack.pop();
                }
            }else if(c == '}' ){
                if(v_stack.empty() || (v_stack.top() != '{')){
                    return false;
                }else{
                    v_stack.pop();
                }
            }
            else if(c == ']' ){
                if(v_stack.empty() || (v_stack.top() != '[')){
                    return false;
                }else{
                    v_stack.pop();
                }
            }
        }

        return v_stack.size() == 0;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
