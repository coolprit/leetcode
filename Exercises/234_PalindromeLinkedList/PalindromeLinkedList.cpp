#include "PalindromeLinkedList.h"

bool PalindromeLinkedList::isPalindrome(Util::ListNode* head)
{
    Util::ListNode* singleStepPtr{head};
    Util::ListNode* doubleStepPtr{head};
    std::stack<int> stackStorage;
    while (doubleStepPtr != nullptr && doubleStepPtr->next != nullptr) {
        stackStorage.push(singleStepPtr->val);
        singleStepPtr = singleStepPtr->next;
        doubleStepPtr = doubleStepPtr->next->next;
    }
    if (doubleStepPtr != nullptr) {
        singleStepPtr = singleStepPtr->next;
    }
    while (singleStepPtr != nullptr) {
        if (singleStepPtr->val != stackStorage.top()) {
            return false;
        }
        stackStorage.pop();
        singleStepPtr = singleStepPtr->next;
    }
    return true;
}

void PalindromeLinkedList::test()
{
    std::cout << "234: Palindrome Linked List" << difficultyToString(difficulty).value() <<"\n";
    Util::ListNode ln1_4{1};
    Util::ListNode ln1_3{2, &ln1_4};
    Util::ListNode ln1_2{2, &ln1_3};
    Util::ListNode ln1_1{1, &ln1_2};
    processExample(&ln1_1);
    Util::ListNode ln2_2{2};
    Util::ListNode ln2_1{1, &ln2_2};
    processExample(&ln2_1);
    std::cout << "------------------" << "\n";
}

void PalindromeLinkedList::processExample(Util::ListNode* head)
{
    std::cout << "Linked List:  \n";
    Util::printListNode(head);
    std::cout << "Is palindrome: " << isPalindrome(head) << " \n";
}

