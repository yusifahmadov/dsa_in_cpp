#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution {
public:
    Node* deleteDuplicates(Node* head) {
        Node* prev = head;
        Node* current = head;
        int index = 0;
        while(current != nullptr){
            cout << index << " Previous node: " << prev->value << endl;
            cout << index << " Current node: " << current->value << endl;
           
         
             if(prev->value == current->value){
                if( current -> next == nullptr){
                    cout << "We got this" << endl;
                    prev->next = nullptr;
                    current = nullptr;

                }else{
                    
                    prev -> next = current -> next;
                    current = prev -> next;
                }
                
            }else{
                prev = current;
                current = current -> next;
            }
            index ++;
        
           

        }

        

        return prev;
    }
};


int main(int argc, char const *argv[])
{

     LinkedList* linkedList = new LinkedList(1);
     Solution* solution = new Solution();
    linkedList->append(1);
    linkedList->append(1);
 

    solution->deleteDuplicates(linkedList->getHead());

    linkedList->printList();
    return 0;
}
