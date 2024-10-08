#include "ThreeSum.h"

#include <algorithm>

#include "../../Util.h"

std::vector<std::vector<int>> ThreeSum::threeSum(std::vector<int>& nums)
{
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for (int leftPtr = 0; leftPtr < nums.size(); leftPtr++) {
        if (leftPtr > 0 && nums[leftPtr] == nums[leftPtr-1]) {
            continue;
        }
        int betweenPtr = leftPtr + 1;
        int rightPtr = nums.size() - 1;
        while(betweenPtr < rightPtr) 
        {
            int sum = nums[leftPtr] + nums[betweenPtr] + nums[rightPtr];
            if (sum < 0) 
            {
                betweenPtr++;
            } else if (sum > 0) 
            {
                rightPtr--;
            } else {
                result.push_back({nums[leftPtr], nums[betweenPtr], nums[rightPtr]});
                betweenPtr++;
                while (nums[betweenPtr] == nums[betweenPtr-1] && betweenPtr < rightPtr) {
                    betweenPtr++;
                }
            }
        }
    }
    return result;
}

void ThreeSum::test()
{
    std::cout << "15: 3 Sum" << difficultyToString(difficulty).value() << "\n";
    std::vector<int> nums{-1, 0, 1, 2, -1, -4};
    processExample(nums);
    nums = {0, 1, 1};
    processExample(nums);
    nums = {0, 0, 0};
    processExample(nums);
    std::cout << "------------------" << "\n";
}

void ThreeSum::processExample(std::vector<int>& nums)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    auto result = threeSum(nums);
    std::cout << "Result: \n";
    Util::print2dVector(result);
}


