#pragma once
#include "../Exercise.h"
#include "../Util.h"

class LinkedListCycle : public Exercise
{
public:
    bool hasCycle(Util::ListNode* head);
    void test() override;
    void processExample(Util::ListNode* head, Util::ListNode* tail, Util::ListNode* cycleStartNode, int pos);
};
