#include "LeetCode.h"
#include "1_TwoSum/TwoSum.h"
#include "20_ValidParentheses/ValidParentheses.h"
#include "21_MergeTwoSortedLists/MergeTwoSortedLists.h"
#include "70_ClimbingStairs/ClimbingStairs.h"
#include "121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.h"
#include "125_ValidPalindrome/ValidPalindrome.h"
#include "141_LinkedListCycle/LinkedListCycle.h"
#include "169_MajorityElement/MajorityElement.h"
#include "226_InvertBinaryTree/InvertBinaryTree.h"
#include "232_ImplementQueueUsingStacks/ImplementQueueUsingStacks.h"
#include "242_ValidAnagram/ValidAnagram.h"
#include "278_FirstBadVersion/FirstBadVersion.h"
#include "383_RansomNote/RansomNote.h"
#include "409_LongestPalindrome/LongestPalindrome.h"
#include "704_BinarySearch/BinarySearch.h"
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
        std::make_unique<ValidAnagram>(),
        std::make_unique<BinarySearch>(),
        std::make_unique<FloodFill>(),
        std::make_unique<LinkedListCycle>(),
        std::make_unique<ImplementQueueUsingStacks>(),
        std::make_unique<FirstBadVersion>(),
        std::make_unique<RansomNote>(),
        std::make_unique<ClimbingStairs>(),
        std::make_unique<LongestPalindrome>(),
        std::make_unique<MajorityElement>()
    };

    for (const auto& exercise : exercises)
    {
        exercise->test();
    }
    
    return 0;
}
