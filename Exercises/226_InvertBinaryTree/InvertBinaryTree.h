#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

namespace Util
{
    struct TreeNode;
}

class InvertBinaryTree : public Exercise
{
    using Exercise::Exercise;
public:
    Util::TreeNode* invertTree(Util::TreeNode* root);
    void test() override;
    void processExample(Util::TreeNode* node);
};
