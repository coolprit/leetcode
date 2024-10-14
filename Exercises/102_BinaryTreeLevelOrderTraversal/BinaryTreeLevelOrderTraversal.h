#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

namespace Util
{
    struct TreeNode;
}

class BinaryTreeLevelOrderTraversal : public Exercise
{
    using Exercise::Exercise;
public:
    std::vector<std::vector<int>> levelOrder(Util::TreeNode* root);
    void test() override;
    void processExample(Util::TreeNode* root);
};
