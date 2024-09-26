#include "MergeTwoSortedLists.h"
#include "../Util.h"


Util::ListNode* MergeTwoSortedLists::mergeTwoLists(Util::ListNode* list1, Util::ListNode* list2) {
    if (!list1) return list2;
    if (!list2) return list1;
    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    list2->next = mergeTwoLists(list1, list2->next);
    return list2;
}

void MergeTwoSortedLists::test()
{
    std::cout << "21: Merge Two Sorted Lists" << "\n";
    Util::ListNode ln1_3{4};
    Util::ListNode ln1_2{2, &ln1_3};
    Util::ListNode ln1_1{1, &ln1_2};
    Util::ListNode ln2_3{4};
    Util::ListNode ln2_2{3, &ln2_3};
    Util::ListNode ln2_1{1, &ln2_2};
    processExample(&ln1_1, &ln2_1);
    Util::ListNode* lnode1 = nullptr;
    Util::ListNode* lnode2 = nullptr;
    processExample(lnode1, lnode2);
    Util::ListNode lnode3{};
    processExample(lnode1, &lnode3);
    std::cout << "------------------" << "\n";
}

void MergeTwoSortedLists::processExample(Util::ListNode* ln1, Util::ListNode* ln2)
{
    std::cout << "List1 values: " << "\n";
    Util::printListNode(ln1);
    std::cout << "List2 values: " << "\n";
    Util::printListNode(ln2);
    std::cout << "List after processing: " << "\n";
    auto result = mergeTwoLists(ln1, ln2);
    Util::printListNode(result);
}

