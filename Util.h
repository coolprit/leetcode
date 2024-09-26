#pragma once
#include <vector>
#include <iostream>

namespace Util
{
    void print2dVector(std::vector<std::vector<int>>& vector_2d);
    template<typename T>
    void printVector(std::vector<T>& vector);

    extern template void printVector<int>(std::vector<int>&);

    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    void printListNode(ListNode* node);
};
