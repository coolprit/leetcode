#pragma once
#include "../../Exercise.h"

class AddBinary : public Exercise
{
    using Exercise::Exercise;
public:
    std::string addBinary(std::string a, std::string b);
    void processExample(std::string a, std::string b);
    void test() override;
};
