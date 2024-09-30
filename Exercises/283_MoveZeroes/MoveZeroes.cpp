#include "MoveZeroes.h"

#include "../../Util.h"

void MoveZeroes::moveZeroes(std::vector<int>& nums)
{
    int zeroIndex = -1;
    for (int i = 0; i < nums.size(); ++i) 
    {
        if (nums[i] == 0) 
        {
            if (zeroIndex < 0) zeroIndex = i;
        } else {
            if (zeroIndex >= 0) {
                nums[zeroIndex] ^= nums[i];
                nums[i] ^= nums[zeroIndex];
                nums[zeroIndex] ^= nums[i];
                i = zeroIndex;
                zeroIndex = -1;
            }
        }
    }
}

void MoveZeroes::test()
{
    std::cout << "283: Move Zeroes" << difficultyToString(difficulty).value() <<"\n";
    std::vector<int> nums {0, 1, 0, 3, 12};
    processExample(nums);
    nums = {0};
    processExample(nums);
    std::cout << "------------------" << "\n";
}

void MoveZeroes::processExample(std::vector<int>& nums)
{
    std::cout << "List: \n";
    Util::printVector(nums);
    std::cout << "List after moving zeroes to the back: \n";
    moveZeroes(nums);
    Util::printVector(nums);
}


