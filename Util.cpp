#include "Util.h"

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

}

