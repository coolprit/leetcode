#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class BinarySearch : public Exercise
{
    using Exercise::Exercise;
public:
    int search(std::vector<int>& nums, int target);
    void test() override;
    void processExample(std::vector<int>& nums, int target);
};
