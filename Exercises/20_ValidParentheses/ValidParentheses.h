#pragma once

#include "../../Exercise.h"

class ValidParentheses : public Exercise
{
    using Exercise::Exercise;
public:
    bool isValid(std::string s);
    void test() override;
    void processExample(std::string s);
};
