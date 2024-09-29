#pragma once
#include "../Exercise.h"

class ImplementQueueUsingStacks : public Exercise
{
public:
    void test() override;
    void processExample(std::vector<std::string>& cmd, std::initializer_list<std::unique_ptr<int>>& elems);
};
