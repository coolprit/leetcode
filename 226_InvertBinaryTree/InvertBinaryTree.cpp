#include "InvertBinaryTree.h"
#include "../Util.h"

Util::TreeNode* InvertBinaryTree::invertTree(Util::TreeNode* root)
{
    if (!root) return nullptr;
    Util::TreeNode* tmp = root->right;
    root->right = root->left;
    root->left = tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

void InvertBinaryTree::test()
{
    using namespace Util;
    std::cout << "226: Invert Binary Tree" << "\n";
    TreeNode t1_lvl3_node1{1};
    TreeNode t1_lvl3_node2{3};
    TreeNode t1_lvl3_node3{6};
    TreeNode t1_lvl3_node4{9};
    TreeNode t1_lvl2_node1{2, &t1_lvl3_node1, &t1_lvl3_node2};
    TreeNode t1_lvl2_node2{7, &t1_lvl3_node3, &t1_lvl3_node4};
    TreeNode t1_lvl1_node1{4, &t1_lvl2_node1, &t1_lvl2_node2};
    processExample(&t1_lvl1_node1);
    TreeNode t2_lvl2_node1{1};
    TreeNode t2_lvl2_node2{3};
    TreeNode t2_lvl1_node1{2, &t2_lvl2_node1, &t2_lvl2_node2};
    processExample(&t2_lvl1_node1);
    TreeNode* nullNode{nullptr};
    processExample(nullNode);
    std::cout << "------------------" << "\n";
}

void InvertBinaryTree::processExample(Util::TreeNode* node) 
{
    std::cout << "Tree before invert: " << "\n";
    Util::printLeftToRight(node);
    auto invertedTree = invertTree(node);
    std::cout << "Tree after invert: " << "\n";
    Util::printLeftToRight(invertedTree);
}

