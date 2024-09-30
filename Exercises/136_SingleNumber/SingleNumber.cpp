#include "SingleNumber.h"

#include "../../Util.h"

int SingleNumber::singleNumber(std::vector<int>& nums)
{
    int result = 0;
    for (const auto& val : nums) 
    {
        result ^= val;
    }
    return result;
}

void SingleNumber::test()
{
    std::cout << "136: Single Number" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> nums {2, 2, 1};
    processExample(nums);
    nums = {4, 1, 2, 1, 2};
    processExample(nums);
    nums = {1};
    processExample(nums);
    std::cout << "------------------" << "\n";
}

void SingleNumber::processExample(std::vector<int>& nums)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    std::cout << "Single number in the list: " << singleNumber(nums) << " \n";
}


