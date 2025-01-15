#include "../linked_list.cpp"

#include "../node.cpp"
#include <iostream>

using namespace std;

class Solution {
public:
    Node* reverseBetween(Node* head, int left, int right) {
        Node* beforeReverseBegin = nullptr;
        Node* reverseBegin = head;
        

        for(int i = 0; i < left - 1; i++){
            beforeReverseBegin = reverseBegin;
            reverseBegin = reverseBegin -> next;
        }
        Node* reverseEnd = reverseBegin;
        
        for(int i =0; i < (right - left); i++){
            reverseEnd = reverseEnd -> next;
        }



        Node* nextToReverseEnd = reverseEnd->next;
        if(beforeReverseBegin)beforeReverseBegin->next = nullptr;
        reverseEnd -> next = nullptr;


        Node* before = nullptr;
        Node* current=  reverseBegin;
        Node* after = nullptr;

        while(current){
            after = current -> next;
            current -> next = before;
            before = current;
            current = after;
        }
        
        
        if(beforeReverseBegin){
            beforeReverseBegin -> next = before;
        }else{
            head = before;
        }
        
        reverseBegin->next = nextToReverseEnd;



        return head;
        



    }
};


int main(int argc, char const *argv[])
{
    
    
     LinkedList* linkedList = new LinkedList(1);
     Solution* solution = new Solution();   
     linkedList->append(2);
     linkedList->append(3);
 
  

 linkedList -> head =   solution->reverseBetween(linkedList->getHead(), 1,2);

    linkedList->printList();
    return 0;
}
