#pragma once
#include "../Exercise.h"

namespace Util
{
    struct TreeNode;
}

class InvertBinaryTree : public Exercise
{
public:
    Util::TreeNode* invertTree(Util::TreeNode* root);
    void test() override;
    void processExample(Util::TreeNode* node);
};
