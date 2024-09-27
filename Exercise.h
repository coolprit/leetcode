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
    virtual ~Exercise() = default;
    Exercise() = default;
    Exercise(const Exercise& other) = delete;
    Exercise(Exercise&& other) = delete;
    Exercise& operator=(const Exercise& other) = delete;
    Exercise& operator=(Exercise&& other) = delete;
};
