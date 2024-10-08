#include "MiddleOfTheLinkedList.h"

Util::ListNode* MiddleOfTheLinkedList::middleNode(Util::ListNode* head)
{
    Util::ListNode *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void MiddleOfTheLinkedList::test()
{
    std::cout << "876: Middle of the Linked List" << difficultyToString(difficulty).value() <<"\n";
    Util::ListNode ln1_5{5};
    Util::ListNode ln1_4{4, &ln1_5};
    Util::ListNode ln1_3{3, &ln1_4};
    Util::ListNode ln1_2{2, &ln1_3};
    Util::ListNode ln1_1{1, &ln1_2};
    processExample(&ln1_1);
    Util::ListNode ln2_6{6};
    Util::ListNode ln2_5{5, &ln2_6};
    Util::ListNode ln2_4{4, &ln2_5};
    Util::ListNode ln2_3{3, &ln2_4};
    Util::ListNode ln2_2{2, &ln2_3};
    Util::ListNode ln2_1{1, &ln2_2};
    processExample(&ln2_1);
    std::cout << "------------------" << "\n";
}

void MiddleOfTheLinkedList::processExample(Util::ListNode* head)
{
    std::cout << "List: \n";
    Util::printListNode(head);
    std::cout << "Middle of the Linked List: \n";
    decltype(auto) middle = middleNode(head);
    Util::printListNode(middle);
}

