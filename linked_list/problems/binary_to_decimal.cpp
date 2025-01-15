#include "../linked_list.cpp"
#include "../node.cpp"
#include <iostream>

using namespace std;


class Solution {
public:
    int getDecimalValue(Node* head) {
        Node* temp = head;
        int length =0;
          while(temp)
        {   
            temp = temp ->next;
            length++;

        }
        Node* before = nullptr;
        Node* current =head;
        Node* after = nullptr;

        for(int i = 0; i < length; i++){
            after = current -> next;
            current -> next = before;
            before = current;
            current = after;
        }

       head = before;

        temp = head;
        int n =0;
        int sum = 0;
        while(temp){
            
            cout << temp->value<< endl;
            sum = sum + ((temp->value)*pow(2,n));
            temp = temp->next;
            n++;
        }
    return sum;


      
    }
};
int main(int argc, char const *argv[])
{
    LinkedList* linkedList1 = new LinkedList(1);
    Solution* solution = new Solution();
    linkedList1->append(0);
    linkedList1->append(1);

    solution->getDecimalValue(linkedList1->getHead());
    linkedList1->printList();


    return 0;
}
