#pragma once
#include "../../Exercise.h"

class SlidingWindowMaximum : public Exercise
{
    using Exercise::Exercise;
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k);
    void test() override;
    void processExample(std::vector<int>& nums, int k);
};
