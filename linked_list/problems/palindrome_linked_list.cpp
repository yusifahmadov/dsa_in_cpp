#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(Node* head) {
        vector<int> headList;
        bool palindromeDetected = true;    

        Node* temp = head;
        int index = 0;
        while(temp){
            headList.push_back(temp->value);
            temp = temp->next;
        }

       
        Node* before=  nullptr;
        Node* current = head;
        Node* after = nullptr;

        while(current){
            after = current -> next;
            current -> next = before;
            before = current;
            current = after;
        }

        Node* reversed = before;
        
        while(reversed){
            if(headList[index] != reversed -> value){
                palindromeDetected = false;
                break;
            }
            
            reversed = reversed -> next;
            index ++;
        }
        
        return palindromeDetected;

    }
};

int main(int argc, char const *argv[])
{
    
    LinkedList* linkedList = new LinkedList(1);
     Solution* solution = new Solution();   
     linkedList->append(2);
     linkedList->append(2);
     linkedList->append(1);
     
     
 
  

    bool result=   solution->isPalindrome(linkedList->getHead());
    cout << result << endl;

    return 0;
}
