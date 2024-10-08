#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class MiddleOfTheLinkedList : public Exercise
{
    using Exercise::Exercise;
public:
    Util::ListNode* middleNode(Util::ListNode* head);
    void test() override;
    void processExample(Util::ListNode* head);
};
