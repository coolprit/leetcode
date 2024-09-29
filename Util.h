#pragma once
#include <stack>
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

    class StackBasedQueue
    {
    public:    
        std::stack<int> queueStack;
        std::stack<int> operationStack;

        StackBasedQueue() {}

        void push(int x)
        {
            while(!queueStack.empty())
            {
                int poppedVal = queueStack.top();
                queueStack.pop();
                operationStack.push(poppedVal);
            }
            queueStack.push(x);
            while(!operationStack.empty()) 
            {
                int poppedVal = operationStack.top();
                operationStack.pop();
                queueStack.push(poppedVal);
            }
        }

        int pop()
        {
            int poppedVal = queueStack.top();
            queueStack.pop();
            return poppedVal;
        }

        int peek()
        {
            return queueStack.top();
        }

        bool empty()
        {
            return queueStack.empty();
        }
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
