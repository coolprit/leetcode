#include "LinkedListCycle.h"

bool LinkedListCycle::hasCycle(Util::ListNode* head)
{
    Util::ListNode* singleStep = head;
    Util::ListNode* doubleStep = head;
    while (doubleStep != nullptr && doubleStep->next != nullptr) {
        singleStep = singleStep->next;
        doubleStep = doubleStep->next->next;
        if (singleStep == doubleStep) return true;
    }
    return false;
}

void LinkedListCycle::test()
{
    std::cout << "141: Linked List Cycle" << difficultyToString(difficulty).value() <<"\n";
    Util::ListNode ln1_4{-4};
    Util::ListNode ln1_3{0, &ln1_4};
    Util::ListNode ln1_2{2, &ln1_3};
    Util::ListNode ln1_1{3, &ln1_2};
    processExample(&ln1_1, &ln1_4, &ln1_2, 1);
    Util::ListNode ln2_2{2};
    Util::ListNode ln2_1{1, &ln2_2};
    processExample(&ln2_1, &ln2_2, &ln2_1, 0);
    Util::ListNode ln3_1{1};
    processExample(&ln3_1, &ln3_1, nullptr, -1);
    std::cout << "------------------" << "\n";
}

void LinkedListCycle::processExample(Util::ListNode* head, Util::ListNode* tail, Util::ListNode* cycleStartNode, int pos)
{
    std::cout << "Linked List:" << "\n";
    Util::printListNode(head);
    std::cout << "Cycle index: " << pos << "\n";
    tail->next = cycleStartNode;
    std::cout << "Has cycle: " << hasCycle(head) << "\n";
}


