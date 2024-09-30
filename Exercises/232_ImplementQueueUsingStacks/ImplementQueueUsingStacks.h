#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class ImplementQueueUsingStacks : public Exercise
{
    using Exercise::Exercise;
public:
    void test() override;
    void processExample(std::vector<std::string>& cmd, std::initializer_list<std::unique_ptr<int>>& elems);
};
