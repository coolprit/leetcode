#include "BinarySearch.h"

int BinarySearch::search(std::vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (target == nums[mid]) return mid;
        if (target < nums[mid]) right = mid - 1;
        else if(target > nums[mid]) left = mid + 1;
    }
    return -1;
}

void BinarySearch::processExample(std::vector<int>& nums, int target)
{
    std::cout << "List: " << "\n";
    Util::printVector(nums);
    std::cout << "Target: " << target << "\n";
    std::cout << "Result: " << search(nums, target) << "\n";
}

void BinarySearch::test()
{
    std::cout << "704: Binary Search" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> nums{-1, 0, 3, 5, 9, 12};
    processExample(nums, 9);
    nums = {-1, 0, 3, 5, 9, 12};
    processExample(nums, 2);
    std::cout << "------------------" << "\n";
}


