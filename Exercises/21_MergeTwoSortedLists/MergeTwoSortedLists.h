﻿#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

namespace Util
{
    struct ListNode;
}

class MergeTwoSortedLists : public Exercise
{
    using Exercise::Exercise;
public:
    Util::ListNode* mergeTwoLists(Util::ListNode* list1, Util::ListNode* list2);
    void test() override;
    void processExample(Util::ListNode* ln1, Util::ListNode* ln2);
};
