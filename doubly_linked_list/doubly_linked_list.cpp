#include "node.cpp"
#include <iostream>
using namespace std;
class DoublyLinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        DoublyLinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail= newNode;
            length = 1;
        }

        void printList(){
            Node* temp = head;

            while(temp){
                cout << temp -> value << endl;
                temp = temp -> next;
            }
        }
        Node* getHead() {
            return head;
        }

        void getTail() {
            if (tail) {
                cout << "Tail: " << tail->value << endl;
            } else {
                cout << "Tail is nullptr" << endl;
            }
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

        void append(int value){
            
            Node* newNode = new Node(value);
            if(length == 0){
                head = newNode;
                tail = newNode;
            }else{
              

                tail -> next = newNode;
                newNode -> prev = tail;
                tail = newNode;
            }
            
            length ++;
        }

        void deleteLast(){
            Node* temp = tail ;

            if(length == 0) return;

            if(length == 1) {
                head = nullptr;
                tail = nullptr;
            }else{
                tail = tail -> prev;
                tail -> next = nullptr;

                

            }
            delete temp;
            length--;
        }

        void prepend(int value){
            Node* newNode = new Node(value);
            if(length == 0){
                head = newNode;
                tail = newNode;
            }else{
                newNode -> next = head;
                head -> prev = newNode;
                head = newNode;
            }

            length++;
        }

        void deleteFirst(){
            Node* temp = head;
            if(length == 0) return;
            if(length == 1){
                head = nullptr;
                tail = nullptr;
            }else{
                
                head = head -> next;
                head -> prev = nullptr
            }

            delete temp;
            length--;
        }

        Node* get(int index){
            if(index< 0 || index >=length)return nullptr;
            Node* temp = head;
            if(index < length/2){
                for(int i =0; i<index; i++){
                temp = temp->next;
            }    
            }else{
                temp= tail;
                for(int i =length-1; i> index; i--){
                temp = temp->prev;
            }
            }
            
            return temp;
        }

        bool set(int index, int value){
            Node* temp = get(index);
            if(temp){
                temp -> value = value;
                return true;
            }

            return false;

        }

        bool insert(int index, int value){
            if(index < 0 || index > length) return false;
            if(index == 0){
                prepend(value);
                return true;
            }
            if(index == length){
                append(value);
                return true;
            }
            Node* newNode = new Node(value);
            Node* temp = get(index-1);
            Node* temp2 = temp->next;
            temp -> next =newNode;
            newNode -> prev = temp;
            newNode-> next = temp2;
            temp2 -> prev = temp;

            length ++;
            return true;
        }

        void deleteNode(int index){
            if(index < 0 || index > length) return; 
             if(index ==0) return deleteFirst();
            if(index == length-1) return deleteLast();
            Node* current = get(index);
            current -> next -> prev = current->prev;
            current -> prev -> next = temp -> prev;

            delete temp;
            length--;



        }

};

int main(int argc, char const *argv[])
{
    return 0;
}
