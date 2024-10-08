#include "SlidingWindowMaximum.h"

#include "../../Util.h"

std::vector<int> SlidingWindowMaximum::maxSlidingWindow(std::vector<int>& nums, int k)
{
    std::vector<int> result;
    std::deque<int> buffer;
    for(int left = 0, right = 0; right < nums.size(); ++right) 
    {
        while(!buffer.empty() && nums[right] > buffer.back()) buffer.pop_back();
        buffer.push_back(nums[right]);
        if (right-left+1 == k)
        {
            int val = buffer.front();
            if (nums[left] == val) buffer.pop_front();
            left++;
            result.push_back(val);
        }
    }
    return result;
}

void SlidingWindowMaximum::test()
{
    std::cout << "239: Sliding Window Maximum" << difficultyToString(difficulty).value() << "\n";
    std::vector<int> nums{1, 3, -1, -3, 5, 3, 6, 7};
    processExample(nums, 3);
    nums = {1};
    processExample(nums, 1);
    std::cout << "------------------" << "\n";
}

void SlidingWindowMaximum::processExample(std::vector<int>& nums, int k)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    std::cout << "Sliding windows size: " << k << "\n";
    std::cout << "Result: \n";
    auto result = maxSlidingWindow(nums, k);
    Util::printVector(result);
}

