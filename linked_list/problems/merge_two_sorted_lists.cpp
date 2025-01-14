#include "../linked_list.cpp"
#include "../node.cpp"
#include <iostream>

using namespace std;


class Solution {
public:
    Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* lastNodeOfList1 = list2;

        while(lastNodeOfList1){
            lastNodeOfList1 = lastNodeOfList1 -> next;
        }

        lastNodeOfList1-> next = list2;

        Node* prev = list1;
        Node* temp = list1;

        while(temp){
             if(temp->value > temp->next->value){

             }
            prev = temp;
            temp = temp -> next;
           
        }
        
        return nullptr;

    }
};

int main(int argc, char const *argv[])
{
    LinkedList* linkedList1 = new LinkedList(1);
    LinkedList* linkedList2 = new LinkedList(1);
    Solution* solution = new Solution();
    linkedList1->append(2);
    linkedList1->append(4);
    linkedList2->append(3);
    linkedList2->append(4);

    solution->mergeTwoLists(linkedList1->getHead(), linkedList2->getHead());

    linkedList1->printList();


    return 0;
}
