#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class ReverseLinkedList : public Exercise
{
    using Exercise::Exercise;
public:
    Util::ListNode* reverseList(Util::ListNode* head);
    void test() override;
    void processExample(Util::ListNode* head);
};
