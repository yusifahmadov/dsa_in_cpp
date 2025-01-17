#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    Node* modifiedList(vector<int>& nums, Node* head) {
            

            Node* dummy = new Node(0);

            dummy -> next =head;
            head = dummy;
           


                 Node* prev = head;
                Node* current = head-> next;
                Node* loop = head->next;
                sort(nums.begin(),nums.end());
                while(loop ){
                
                if(binary_search(nums.begin(), nums.end(), current->value)){
                    prev -> next = current -> next;
                    current = current -> next;
                    
                }else{
                     prev = current;
                    current = current -> next;
                }


                loop = loop ->next;
                }
                


            head = head ->next;

            return head;
    }
};

int main(int argc, char const *argv[])
{
    
    LinkedList* linkedList = new LinkedList(2);
     Solution* solution = new Solution();   
     linkedList->append(10);
     linkedList->append(9);
     
     
     
 
  
    vector<int> nums = {9,2,5};
   linkedList->head =    solution->modifiedList(nums, linkedList->getHead());

    linkedList->printList();
    return 0;
}
