#include "Util.h"

#include <queue>
#include <iostream>

namespace Util
{
    void print2dVector(std::vector<std::vector<int>>& vector_2d)
    {
        for (size_t i = 0; i < vector_2d.size(); ++i)
        {
            for (size_t j = 0; j < vector_2d[i].size(); ++j)
            {
                std::cout << "[" << vector_2d[i][j] << "]";
            }
            std::cout << "\n";
        }
    }

    void printVectorOfVectors(std::vector<std::vector<int>>& vov)
    {
        std::cout << "[";
        for (size_t i = 0; i < vov.size(); ++i)
        {
            std::cout << "[";
            for (size_t j = 0; j < vov[i].size(); ++j)
            {
                std::cout << vov[i][j];
                if (j != vov[i].size()-1) std::cout << ",";
            }
            std::cout << "]";
        }
        std::cout << "]\n";
    }

    template<typename T>
    void printVector(std::vector<T>& vector)
    {
        std::cout << "[";
        size_t vector_size = vector.size();
        for (size_t i = 0; i < vector_size; ++i)
        {
            std::cout << vector[i];
            if (i != vector_size - 1)  std::cout << ", ";
        }
        std::cout << "]" << "\n";
    }

    template void printVector<int>(std::vector<int>& vector);

    template void printVector<std::string>(std::vector<std::string>& vector);

    void printListNode(ListNode* node)
    {
        std::cout << "[";
        ListNode* iterator = node;
        while (iterator != nullptr)
        {
            std::cout << iterator->val;
            if (iterator->next != nullptr) std::cout << ", ";
            iterator = iterator->next;
        }
        std::cout << "]" << "\n";
    }

    void printPreOrder(TreeNode* node)
    {
        if(node == nullptr) return;
        std::cout << node->val << " ";
        printPostOrder(node->left);
        printPostOrder(node->right);
    }

    void printInOrder(TreeNode* node)
    {
        if(node == nullptr) return;
        printInOrder(node->left);
        std::cout << node->val << " ";
        printInOrder(node->right);
    }


    void printPostOrder(TreeNode* node)
    {
        if(node == nullptr) return;
        printPreOrder(node->left);
        printPreOrder(node->right);
        std::cout << node->val << " ";
    }

    void printLeftToRight(TreeNode* node)
    {
        if(node == nullptr) return;
        std::queue<TreeNode*> queue;
        queue.push(node);
        while(!queue.empty())
        {
            auto top = queue.front();
            queue.pop();
            std::cout << top->val << " ";
            if(top->left != nullptr) queue.push(top->left);
            if(top->right != nullptr) queue.push(top->right);
        }
        std::cout << "\n";
    }

}

