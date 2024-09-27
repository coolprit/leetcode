#pragma once
#include <vector>

namespace Util
{
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    struct TreeNode
    {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    
    void print2dVector(std::vector<std::vector<int>>& vector_2d);
    
    template<typename T>
    void printVector(std::vector<T>& vector);
    extern template void printVector<int>(std::vector<int>& vector);
    
    void printListNode(ListNode* node);

    void printPreOrder(TreeNode* node);
    void printInOrder(TreeNode* node);
    void printPostOrder(TreeNode* node);
    void printLeftToRight(TreeNode* node);
};
