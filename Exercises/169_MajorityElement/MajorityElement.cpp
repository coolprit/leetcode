#include "MajorityElement.h"

#include <algorithm>

int MajorityElement::majorityElement(std::vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size()/2;
    return nums[n]; 
}

int MajorityElement::majorityElement2(std::vector<int>& nums)
{
    size_t count{};
    int candidate{};
    for (auto& val : nums)
    {
        if (count == 0) candidate = val;
        else if (candidate == val) count++;
        else if (candidate != val) count--;
    }
    count = 0;
    for (auto& val : nums)
    {
        if (candidate == val) count++;
    }
    return count > nums.size()/2 ? candidate : -1; 
}

void MajorityElement::test()
{
    std::cout << "169: Majority Element" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> elems{3, 2, 3};
    processExample(elems);
    elems = {2, 2, 1, 1, 1, 2, 2};
    processExample(elems);
    std::cout << "------------------" << "\n";
}

void MajorityElement::processExample(std::vector<int>& nums)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    std::cout << "Majority element is: " << majorityElement2(nums) << "\n";
}


