#include "LeetCode.h"
#include "Exercises/1_TwoSum/TwoSum.h"
#include "Exercises/3_LongestSubstringWithoutRepeatingCharacters/LongestSubstringWithoutRepeatingCharacters.h"
#include "Exercises/9_PalindromeNumber/PalindromeNumber.h"
#include "Exercises/13_RomanToInteger/RomanToInteger.h"
#include "Exercises/15_3Sum/ThreeSum.h"
#include "Exercises/20_ValidParentheses/ValidParentheses.h"
#include "Exercises/21_MergeTwoSortedLists/MergeTwoSortedLists.h"
#include "Exercises/67_AddBinary/AddBinary.h"
#include "Exercises/70_ClimbingStairs/ClimbingStairs.h"
#include "Exercises/102_BinaryTreeLevelOrderTraversal/BinaryTreeLevelOrderTraversal.h"
#include "Exercises/121_BestTimeToBuyAndSellStock/BestTimeToBuyAndSellStock.h"
#include "Exercises/125_ValidPalindrome/ValidPalindrome.h"
#include "Exercises/136_SingleNumber/SingleNumber.h"
#include "Exercises/141_LinkedListCycle/LinkedListCycle.h"
#include "Exercises/150_EvaluateReversePolishNotation/EvaluateReversePolishNotation.h"
#include "Exercises/169_MajorityElement/MajorityElement.h"
#include "Exercises/206_ReverseLinkedList/ReverseLinkedList.h"
#include "Exercises/217_ContainsDuplicate/ContainsDuplicate.h"
#include "Exercises/226_InvertBinaryTree/InvertBinaryTree.h"
#include "Exercises/232_ImplementQueueUsingStacks/ImplementQueueUsingStacks.h"
#include "Exercises/234_PalindromeLinkedList/PalindromeLinkedList.h"
#include "Exercises/239_SlidingWindowMaximum/SlidingWindowMaximum.h"
#include "Exercises/242_ValidAnagram/ValidAnagram.h"
#include "Exercises/278_FirstBadVersion/FirstBadVersion.h"
#include "Exercises/283_MoveZeroes/MoveZeroes.h"
#include "Exercises/338_CountingBits/CountingBits.h"
#include "Exercises/383_RansomNote/RansomNote.h"
#include "Exercises/409_LongestPalindrome/LongestPalindrome.h"
#include "Exercises/704_BinarySearch/BinarySearch.h"
#include "Exercises/733_FloodFill/FloodFill.h"
#include "Exercises/844_BackspaceStringCompare/BackspaceStringCompare.h"
#include "Exercises/876_MiddleOfTheLinkedList/MiddleOfTheLinkedList.h"

int main(int argc, char* argv[])
{
    std::initializer_list<std::unique_ptr<Exercise>> exercises{
        std::make_unique<TwoSum>(Exercise::Difficulty::EASY),
        std::make_unique<ValidParentheses>(Exercise::Difficulty::EASY),
        std::make_unique<MergeTwoSortedLists>(Exercise::Difficulty::EASY),
        std::make_unique<BestTimeToBuyAndSellStock>(Exercise::Difficulty::EASY),
        std::make_unique<ValidPalindrome>(Exercise::Difficulty::EASY),
        std::make_unique<InvertBinaryTree>(Exercise::Difficulty::EASY),
        std::make_unique<ValidAnagram>(Exercise::Difficulty::EASY),
        std::make_unique<BinarySearch>(Exercise::Difficulty::EASY),
        std::make_unique<FloodFill>(Exercise::Difficulty::EASY),
        std::make_unique<LinkedListCycle>(Exercise::Difficulty::EASY),
        std::make_unique<ImplementQueueUsingStacks>(Exercise::Difficulty::EASY),
        std::make_unique<FirstBadVersion>(Exercise::Difficulty::EASY),
        std::make_unique<RansomNote>(Exercise::Difficulty::EASY),
        std::make_unique<ClimbingStairs>(Exercise::Difficulty::EASY),
        std::make_unique<LongestPalindrome>(Exercise::Difficulty::EASY),
        std::make_unique<ReverseLinkedList>(Exercise::Difficulty::EASY),
        std::make_unique<MajorityElement>(Exercise::Difficulty::EASY),
        std::make_unique<ContainsDuplicate>(Exercise::Difficulty::EASY),
        std::make_unique<RomanToInteger>(Exercise::Difficulty::EASY),
        std::make_unique<BackspaceStringCompare>(Exercise::Difficulty::EASY),
        std::make_unique<CountingBits>(Exercise::Difficulty::EASY),
        std::make_unique<SingleNumber>(Exercise::Difficulty::EASY),
        std::make_unique<PalindromeLinkedList>(Exercise::Difficulty::EASY),
        std::make_unique<MoveZeroes>(Exercise::Difficulty::EASY),
        std::make_unique<ThreeSum>(Exercise::Difficulty::MEDIUM),
        std::make_unique<SlidingWindowMaximum>(Exercise::Difficulty::HARD),
        std::make_unique<AddBinary>(Exercise::Difficulty::EASY),
        std::make_unique<MiddleOfTheLinkedList>(Exercise::Difficulty::EASY),
        std::make_unique<PalindromeNumber>(Exercise::Difficulty::EASY),
        std::make_unique<LongestSubstringWithoutRepeatingCharacters>(Exercise::Difficulty::MEDIUM),
        std::make_unique<BinaryTreeLevelOrderTraversal>(Exercise::Difficulty::MEDIUM),
        std::make_unique<EvaluateReversePolishNotation>(Exercise::Difficulty::MEDIUM)
    };

    for (const auto& exercise : exercises)
    {
        exercise->test();
    }
    
    return 0;
}
