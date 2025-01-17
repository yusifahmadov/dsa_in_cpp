#include "../doubly_linked_list.cpp"
#include "../node.cpp"
#include <iostream>


class Solution {
public:
    Node* swapNodes(Node* head, int k) {
        






        return head;
    }
};

int main(int argc, char const *argv[])
{
       
    DoublyLinkedList* linkedList = new DoublyLinkedList(1);
    linkedList->append(2);
    linkedList->append(3);
    linkedList->append(4);
    linkedList->append(5);

    
    Solution* solution = new Solution();
    linkedList->head = solution->swapNodes(linkedList->getHead(),2);

    linkedList->printList();

    

    return 0;
}
