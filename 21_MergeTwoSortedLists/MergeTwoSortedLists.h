#pragma once
#include "../Exercise.h"

namespace Util
{
    struct ListNode;
}

class MergeTwoSortedLists : Exercise
{
public:
    Util::ListNode* mergeTwoLists(Util::ListNode* list1, Util::ListNode* list2);
    void test() override;
    void processExample(Util::ListNode* ln1, Util::ListNode* ln2);
};
