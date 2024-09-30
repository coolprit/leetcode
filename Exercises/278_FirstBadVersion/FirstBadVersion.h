#pragma once
#include "../../Exercise.h"

class FirstBadVersion : public Exercise
{
    using Exercise::Exercise;
public:
    int firstBadVersion(int n);
    void test() override;
    void processExample(int n, int bad);
    bool isBadVersion(int ver);

    int badVersionFrom;
};
