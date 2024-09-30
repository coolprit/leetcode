#pragma once
#include "../../Exercise.h"
#include "../../Util.h"

class FloodFill : public Exercise
{
    using Exercise::Exercise;
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color_to_set);
    void test() override;
    void processExample(std::vector<std::vector<int>>& image, int sr, int sc, int color_to_set);
};
