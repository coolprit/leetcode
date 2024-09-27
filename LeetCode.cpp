#include "LeetCode.h"
#include "1_TwoSum/TwoSum.h"
#include "20_ValidParentheses/ValidParentheses.h"
#include "21_MergeTwoSortedLists/MergeTwoSortedLists.h"
#include "121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.h"
#include "125_ValidPalindrome/ValidPalindrome.h"
#include "226_InvertBinaryTree/InvertBinaryTree.h"
#include "733_FloodFill/FloodFill.h"

int main(int argc, char* argv[])
{
    std::initializer_list<std::unique_ptr<Exercise>> exercises{
        std::make_unique<TwoSum>(),
        std::make_unique<ValidParentheses>(),
        std::make_unique<MergeTwoSortedLists>(),
        std::make_unique<BestTimeToBuyAndSellStock>(),
        std::make_unique<ValidPalindrome>(),
        std::make_unique<InvertBinaryTree>(),
        std::make_unique<FloodFill>()
    };

    for (const auto& exercise : exercises)
    {
        exercise->test();
    }
    
    return 0;
}
