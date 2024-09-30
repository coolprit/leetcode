#include "TwoSum.h"

std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> valueMap;
    int size = static_cast<int>(nums.size());
    for (int i = 0; i < size; ++i) {
        int criteriaValue = target - nums[i];
        if (valueMap.count(criteriaValue)) 
        {
            return { valueMap[criteriaValue], i };
        }
        valueMap[nums[i]] = i;
    }
    return {};
}

void TwoSum::processExample(std::vector<int> values, int target)
{
    std::cout << "List to process: " << "\n";
    Util::printVector<int>(values);
    std::cout << "Result: " << "\n";
    auto result = twoSum(values, target);
    Util::printVector<int>(result);
}

void TwoSum::test()
{
    std::cout << "1: Two Sum" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> values{2, 7, 11, 15};
    processExample(values, 9);
    values = {3, 2, 4};
    processExample(values, 6);
    values = {3, 3};
    processExample(values, 6);
    std::cout << "------------------" << "\n";
}
