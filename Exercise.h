#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <stack>
#include <optional>
#include <string_view>

class Exercise
{
public:
    enum class Difficulty
    {
        EASY,
        MEDIUM,
        HARD
    };

    Difficulty difficulty = Difficulty::EASY;

    virtual void test() = 0;
    virtual ~Exercise() = default;
    Exercise() = default;
    Exercise(Difficulty diff) : difficulty(diff){}
    Exercise(const Exercise& other) = delete;
    Exercise(Exercise&& other) = delete;
    Exercise& operator=(const Exercise& other) = delete;
    Exercise& operator=(Exercise&& other) = delete;
    std::optional<std::string_view> difficultyToString(Difficulty difficulty)
    {
        switch(difficulty)
        {
            case Difficulty::EASY: return " [EASY] ";
            case Difficulty::MEDIUM: return " [MEDIUM] ";
            case Difficulty::HARD: return " [HARD] ";
            default: return std::nullopt;
        }
    }
};
