#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution {
public:
    Node* rotateRight(Node* head, int k) {
        int n =0;
        int lengthOfHead = 1;
        Node* tail = head;
        Node* beforeTail = head;
        while(tail->next){
             
            beforeTail = tail;
            tail = tail->next;
           
        }
        
        while(n < k%lengthOfHead){
        

            tail -> next = head;
            head = tail;
           

            beforeTail -> next = nullptr;
            tail = beforeTail;
            cout << beforeTail->value <<endl;


           
             Node* tempHead = head;

            while(tempHead -> next){
                beforeTail = tempHead;
                tempHead = tempHead -> next;
            }
            


                

            n++;
        }

        return head;
    }
};



int main(int argc, char const *argv[])
{
     LinkedList* linkedList = new LinkedList(0);
     Solution* solution = new Solution();   
     linkedList->append(1);
     linkedList->append(2);
    
 
  

 linkedList -> head =   solution->rotateRight(linkedList->getHead(), 4);

    linkedList->printList();
    
    return 0;
}
