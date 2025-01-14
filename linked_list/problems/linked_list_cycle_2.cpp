#include  <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        int length;

        LinkedList(int value){
            Node* newNode = new Node(value);
            head= newNode;
            tail = newNode;
            length =1;
        
        
        }

        ~LinkedList(){
            Node* temp = head;

            while(head){
                head = head -> next;
                delete temp;
                temp = head;
            }
        }

        void append(int value){
            Node* newNode = new Node(value);
            Node* temp = tail;
            if(length == 0){
                head = newNode;
                tail = newNode;
            }else{
                tail -> next = newNode;
                tail = newNode;
            }



            length ++;
        }

        Node* getHead(){
            return head;
        }


};


class Solution {
public:
     Node *detectCycle(ListNode *head) {
            if(head == nullptr || head-> next == nullptr) return nullptr;

            Node* slow = head;
            Node* fast = head;
            Node* tempFast = nullptr;
            Node* detectedLoopNode = nullptr;
            Node* prev 
            while(fast != nullptr || fast -> next != nullptr){
                tempFast = fast;
                
                slow = slow -> next;
                fast = fast->next->next;
                if(slow==fast){
                    detectedLoopNode = tempFast;
                    break;
                }
            }

            return detectedLoopNode;
            





    }
};

int main(int argc, char const *argv[])
{
    LinkedList* linkedList = new LinkedList(1);
    Solution* solution = new Solution();
    
    

    
    



    return 0;
}
