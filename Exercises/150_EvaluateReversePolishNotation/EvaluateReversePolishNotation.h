#pragma once
#include "../../Exercise.h"

class EvaluateReversePolishNotation : public Exercise
{
    using Exercise::Exercise;
public:
    int evalRPN(std::vector<std::string>& tokens);
    int calculate(int a, int b, std::string operation_sign);
    void test() override;
    void processExample(std::vector<std::string>& tokens);
};
