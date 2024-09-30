#pragma once
#include "../../Exercise.h"

class MoveZeroes : public Exercise
{
    using Exercise::Exercise;
public:
    void moveZeroes(std::vector<int>& nums);
    void test() override;
    void processExample(std::vector<int>& nums);
};
