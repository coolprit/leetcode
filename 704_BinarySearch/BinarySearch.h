#pragma once
#include <vector>

#include "../Exercise.h"

class BinarySearch : public Exercise
{
public:
    int search(std::vector<int>& nums, int target);
    void test() override;
    void processExample(std::vector<int>& nums, int target);
};
