#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <stack>

class Exercise
{
public:
    virtual void test() = 0;
    virtual ~Exercise();
};
