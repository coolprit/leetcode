#include "FloodFill.h"

std::vector<std::vector<int>> FloodFill::floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color_to_set) {
    std::stack<std::pair<int, int>> stack;
    stack.emplace(sr, sc);
    const int base_color = image[sr][sc];
    if (base_color == color_to_set) return image;
    while (!stack.empty())
    {
        std::pair<int, int> stack_el = stack.top();
        int stack_el_color = image[stack_el.first][stack_el.second]; 
        if (stack_el_color == base_color && stack_el_color != color_to_set)
        {
            stack.pop();
            image[stack_el.first][stack_el.second] = color_to_set;
            if (stack_el.first - 1 >= 0 && image[stack_el.first - 1][stack_el.second] == base_color)
                stack.emplace(stack_el.first - 1, stack_el.second);
            if (stack_el.first + 1 < image.size() && image[stack_el.first + 1][stack_el.second] == base_color)
                stack.emplace(stack_el.first + 1, stack_el.second);
            if (stack_el.second - 1 >= 0 && image[stack_el.first][stack_el.second - 1] == base_color)
                stack.emplace(stack_el.first, stack_el.second - 1);
            if (stack_el.second + 1 < image[stack_el.first].size() && image[stack_el.first][stack_el.second + 1] == base_color)
                stack.emplace(stack_el.first, stack_el.second + 1);
        } else stack.pop();
    }
    return image;
}

void FloodFill::processExample(std::vector<std::vector<int>>& image, int sr, int sc, int color_to_set)
{
    std::cout << "Vector pre flood: " << "\n";
    Util::print2dVector(image);
    auto result =  floodFill(image, sr, sc, color_to_set);
    std::cout << "Vector post flood: " << "\n";
    Util::print2dVector(image);
}

void FloodFill::test()
{
    std::cout << "733: Flood Fill" << difficultyToString(difficulty).value() <<"\n";
    std::vector<std::vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    processExample(image, 1, 1, 2);
    image = {{0, 0, 0}, {0, 0, 0}};
    processExample(image, 0, 0, 0);
    std::cout << "------------------" << "\n";
}
