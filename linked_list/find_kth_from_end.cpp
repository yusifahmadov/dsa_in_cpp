#include  <iostream>
#include "linked_list.cpp"
#include "node.cpp"
using namespace std;


class Solution {
public:
    Node* findKthFromEnd(Node* head,int value){
        
        Node* slow = head;
        Node* fast = head;

        for(int i =0; i < value; i++){

            if(fast == nullptr){
                return nullptr;
            }

            fast = fast -> next;
        }

        while(fast != nullptr){
            slow = slow -> next;
            fast = fast -> next;
            

            
       }


        return slow;


    }
};

int main(int argc, char const *argv[])
{
    LinkedList* linkedList = new LinkedList(1);
    Solution* solution = new Solution();
    linkedList->append(2);
    linkedList->append(3);
    linkedList->append(4);
    linkedList->append(5);
    
    Node* node =   solution->findKthFromEnd(linkedList->getHead(),3);

    cout << node->value << endl;



    
    



    return 0;
}
