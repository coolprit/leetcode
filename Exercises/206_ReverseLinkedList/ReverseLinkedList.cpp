#include "ReverseLinkedList.h"

Util::ListNode* ReverseLinkedList::reverseList(Util::ListNode* head)
{
    Util::ListNode* prev = nullptr;
    Util::ListNode* next = nullptr;
    Util::ListNode* curr = head;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void ReverseLinkedList::test()
{
    std::cout << "206: Reverse Linked List" << difficultyToString(difficulty).value() <<"\n";
    Util::ListNode ln1_5{5};
    Util::ListNode ln1_4{4, &ln1_5};
    Util::ListNode ln1_3{3, &ln1_4};
    Util::ListNode ln1_2{2, &ln1_3};
    Util::ListNode ln1_1{1, &ln1_2};
    processExample(&ln1_1);
    Util::ListNode ln2_2{2};
    Util::ListNode ln2_1{1, &ln2_2};
    processExample(&ln2_1);
    processExample(nullptr);
    std::cout << "------------------" << "\n";
}

void ReverseLinkedList::processExample(Util::ListNode* head)
{
    std::cout << "Linked List to reverse: \n";
    Util::printListNode(head);
    std::cout << "Linked List after reverse: \n";
    auto* reversed = reverseList(head);
    Util::printListNode(reversed);
}


