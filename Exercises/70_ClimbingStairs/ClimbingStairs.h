#pragma once
#include "../../Exercise.h"

class ClimbingStairs : public Exercise
{
    using Exercise::Exercise;
public:
    int climbStairs(int n);
    void test() override;
    void processExample(int n);
};
