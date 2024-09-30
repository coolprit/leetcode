#include "ContainsDuplicate.h"

#include <unordered_set>

bool ContainsDuplicate::containsDuplicate(std::vector<int>& nums)
{
    std::unordered_set<int> visited;
    for (auto& num : nums) {
        if (visited.count(num) > 0)
            return true;
        visited.insert(num);
    }
    return false;
}

void ContainsDuplicate::test()
{
    std::cout << "217: Contains Duplicate" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> nums {1, 2, 3, 1};
    processExample(nums);
    nums = {1, 2, 3, 4};
    processExample(nums);
    nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    processExample(nums);
    std::cout << "------------------" << "\n";
}

void ContainsDuplicate::processExample(std::vector<int>& nums)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    std::cout << "Contains duplicate: " << containsDuplicate(nums) << "\n";
}


