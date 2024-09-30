#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class PalindromeLinkedList : public Exercise
{
    using Exercise::Exercise;
public:
    bool isPalindrome(Util::ListNode* head);
    void test() override;
    void processExample(Util::ListNode* head);
};
