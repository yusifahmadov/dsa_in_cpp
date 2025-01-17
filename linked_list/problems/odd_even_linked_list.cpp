#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;
class Solution {
public:
    Node* oddEvenList(Node* head) {
        int length = 0;



        Node* evenHead=  new Node(0);
        Node* evenTail = evenHead;
        Node* temp = head;
        while(temp){
            temp = temp -> next;
            length++;
        }
        Node* prev = head;
        Node* current = head->next;
        cout << length/2 << endl;
        while(current){
            // cout << current -> value <<endl;
            Node* tempCurrent = current->next;
            evenTail -> next = current;
            evenTail = evenTail -> next;

            prev -> next =tempCurrent;
            prev = prev->next;
            cout << prev << endl;
            
            
            if(prev != nullptr && prev->next != nullptr) {
                current = prev -> next;
            }else{
                cout << "We are here" << endl;
                current = nullptr;
            }
            
            evenTail -> next = nullptr;


        }
        evenHead  = evenHead -> next;
        
        // prev -> next = evenHead;
        Node* tail = head;

        while(tail->next){
            tail = tail->next;
        }
        
        tail -> next = evenHead;

        return head;

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
     linkedList->append(6);
     linkedList->append(7);
     linkedList->append(8);
     
     
 
  

    linkedList->head=   solution->oddEvenList(linkedList->getHead());

    linkedList->printList();

    return 0;
}
