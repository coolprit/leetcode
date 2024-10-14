#include "BinaryTreeLevelOrderTraversal.h"

#include <queue>

std::vector<std::vector<int>> BinaryTreeLevelOrderTraversal::levelOrder(Util::TreeNode* root)
{
    std::vector<std::vector<int>> result{};
    if(root == nullptr) return result;
    std::queue<std::pair<Util::TreeNode*, int>> queue;
    queue.emplace(root, 0);
    while(!queue.empty())
    {
        auto top = queue.front();
        auto val = top.second + 1;
        if(top.second >= result.size())
        {
            std::vector<int> tmp;
            result.push_back(tmp);
        }
        result[top.second].push_back(top.first->val);
        queue.pop();
        if(top.first->left != nullptr) queue.emplace(top.first->left, val);
        if(top.first->right != nullptr) queue.emplace(top.first->right, val);
    }
    return result;
}

void BinaryTreeLevelOrderTraversal::test()
{
    using namespace Util;
    std::cout << "102: Binary Tree Level Order Traversal" << difficultyToString(difficulty).value() <<"\n";
    TreeNode t1_lvl3_node1{15};
    TreeNode t1_lvl3_node2{7};
    TreeNode t1_lvl2_node1{9};
    TreeNode t1_lvl2_node2{20, &t1_lvl3_node1, &t1_lvl3_node2};
    TreeNode t1_lvl1_node1{3, &t1_lvl2_node1, &t1_lvl2_node2};
    processExample(&t1_lvl1_node1);
    TreeNode t2_lvl1_node1{1};
    processExample(&t2_lvl1_node1);
    processExample(nullptr);
    std::cout << "------------------" << "\n";
}

void BinaryTreeLevelOrderTraversal::processExample(Util::TreeNode* root)
{
    std::cout << "Tree: \n";
    Util::printLeftToRight(root);
    std::cout << "Level order: \n";
    auto res = levelOrder(root);
    Util::printVectorOfVectors(res);
}


