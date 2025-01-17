#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;
class Solution {
public:
    Node* removeElements(Node* head, int val) {
        if(head == nullptr ) return head;
        Node* dummyNode = new Node(0);
        dummyNode -> next = head;
        head = dummyNode;
        if(head == nullptr) return nullptr;
        Node* prev =head;
        Node* current = head->next;
        Node* loop = head->next;
        while(loop){
            if(current -> value == val){
                    prev -> next = current -> next;
                    current = current -> next;
                
            }else{
                prev = current;
                current = current -> next;
                
            }
           

            loop = loop -> next;
        }
       
        head = head -> next;

        
        return head;
    }
};

int main(int argc, char const *argv[])
{
    
    LinkedList* linkedList = new LinkedList(1);
     Solution* solution = new Solution();   
    //  linkedList->append(2);
    //  linkedList->append(3);
    //  linkedList->append(5);
    //  linkedList->append(4);
     
 
  

 linkedList -> head =   solution->removeElements(linkedList->getHead(),4);

    linkedList->printList();
    return 0;
}
