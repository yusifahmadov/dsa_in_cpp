#include "../linked_list.cpp"
#include "../node.cpp"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Node* addTwoNumbers(Node* l1, Node* l2) {

        /// Reversing L1

        Node* before = nullptr;
        Node* current = l1;
        Node* after = nullptr;

        while(current){
            after = current ->next;
            current -> next = before;
            before = current;
            current = after;
        }

        Node* reversedL1 = before;

        /// Reversing L2

        before = nullptr;
        current = l2;
        after = nullptr;

        while(current){
            after = current ->next;
            current -> next = before;
            before = current;
            current = after;
        }

        Node* reversedL2 = before;

        /// Finding length of L1

        int lengthOfReversedL1 = 0;
        Node* temp = reversedL1;

        while(temp){
            temp = temp ->next;
            lengthOfReversedL1++;
        }

        /// Finding length of L2

        int lengthOfReversedL2 = 0;
        temp = reversedL2;

        while(temp){
            temp = temp -> next;
            lengthOfReversedL2 ++;
        }
        delete temp;


        /// Adding dummy nodes to equalize sizes of the heads

        if(lengthOfReversedL1 > lengthOfReversedL2){
            

            for(int i =0; i< lengthOfReversedL1 - lengthOfReversedL2; i++){
                Node* dummyNode = new Node(0);

                dummyNode->next = reversedL2;
                reversedL2 = dummyNode;
            }
            
        }else if(lengthOfReversedL2 > lengthOfReversedL1){

            for(int i =0; i< lengthOfReversedL2 - lengthOfReversedL1; i++){
                Node* dummyNode = new Node(0);

                dummyNode -> next = reversedL1;
                reversedL1 = dummyNode;
            }
        }

            
   
        before = nullptr;
        current = reversedL2;
        after = nullptr;

         while(current){
            after = current ->next;
            current -> next = before;
            before = current;
            current = after;
        }

        reversedL2 = before;

        

          before = nullptr;
        current = reversedL1;
        after = nullptr;

         while(current){
            after = current ->next;
            current -> next = before;
            before = current;
            current = after;
        }

        reversedL1 = before;

        
        Node* tempL1 = reversedL1;
        Node* tempL2 = reversedL2;

        Node* tail = new Node(0);
        Node* head = tail;

        bool increasingOne = false;
        while(tempL1){
            
            int value = tempL1 -> value + tempL2 -> value;
            if(increasingOne) value++;
            if(value > 9){
                
                if(tempL1 -> next == nullptr || tempL2 -> next == nullptr){
                    
                    int val = value %10;
                    Node* tempFirstNode = new Node(val);

                    Node* tempSecondNode = new Node((value - val)/10);
                    
                    tail -> next = tempFirstNode;
                    tail = tempFirstNode;
                    

                    tail->next = tempSecondNode;
                    tail = tempSecondNode;
                 
                    
                }else{
                    value = value % 10;
                    

                    increasingOne = true;
                    Node* newNode = new Node(value);
                    tail -> next = newNode;
                    tail = newNode;
                }


                
            }else{
                
                Node* newNode = new Node(value);
                tail -> next = newNode;
                tail = newNode;
                increasingOne = false;
            }


            tempL1= tempL1 -> next;
            tempL2= tempL2 -> next;
        }

        head = head -> next;














      
        





        return head;



    }
};


int main(int argc, char const *argv[])
{
 LinkedList* linkedList1 = new LinkedList(8);
 LinkedList* linkedList2 = new LinkedList(9);
    Solution* solution = new Solution();
   linkedList1->append(3);
   linkedList1->append(2);
   linkedList2->append(2);
   linkedList2->append(1);
    
 

    linkedList1 -> head = solution->addTwoNumbers(linkedList1->getHead(),linkedList2->getHead());
    linkedList1->printList();

    return 0;
}
