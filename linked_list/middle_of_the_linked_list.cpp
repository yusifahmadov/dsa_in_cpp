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

class Solution{
    public:
        Node* findMiddleNode(Node* head){
            
            
            int length = 0;
             Node* temp = head;
            while(temp){
                temp = temp->next;
                length++;
            }


            if(length == 0) return nullptr;
            
            int middleIndex = length / 2;
            
            temp = head;
            for(int i = 0; i < middleIndex; i++){
                temp = temp -> next;
            }
            return temp;
            
        
                
            
        }

        Node* middleNode(Node* head){
            int length=0;
            Node* temp = head;
            while(temp){
                temp = temp->next;
                length++;
            }


            int middleIndex = findMiddleIndex(length);
            
            


            return get(head, middleIndex, length);
        }

        Node* get(Node* head, int index, int length){
            if(index < 0 || index >= length) return nullptr;

            
            Node* temp = head;

            for(int i =0; i < index; i++){
                temp = temp -> next;
            }

            return temp;




        }

        int findMiddleIndex(int length){ 
            
            cout << length / 2 <<endl;
            return length/2;
        }
};

int main(int argc, char const *argv[])
{
    LinkedList* linkedList = new LinkedList(1);
    Solution* solution = new Solution();
   

  Node* middleNode=   solution-> findMiddleNode(linkedList->getHead());

  cout << middleNode -> value << endl;

    return 0;
}
