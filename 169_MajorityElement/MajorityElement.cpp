#include "MajorityElement.h"

#include <algorithm>

#include "../Util.h"

int MajorityElement::majorityElement(std::vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size()/2;
    return nums[n]; 
}

void MajorityElement::test()
{
    std::cout << "169: Majority Element \n";
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
    std::cout << "Majority element is: " << majorityElement(nums) << "\n";
}


