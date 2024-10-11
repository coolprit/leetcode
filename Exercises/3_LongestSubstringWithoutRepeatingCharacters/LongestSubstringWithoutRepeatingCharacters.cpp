#include "LongestSubstringWithoutRepeatingCharacters.h"

#include <queue>
#include <unordered_set>

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s)
{
    std::unordered_set<char> set;
    std::queue<char> queue;
    unsigned int maximum{}, local_maximum{};
    for (size_t i = 0; i < s.size(); ++i) 
    {
        if (set.contains(s[i])) {
            while(!queue.empty() && queue.front() != s[i]) {
                set.erase(queue.front());
                queue.pop();
                local_maximum--;
            }
            queue.pop();
            queue.push(s[i]);
        } else {
            local_maximum++;
            set.insert(s[i]);
            queue.push(s[i]);
            if (local_maximum > maximum) maximum = local_maximum;
        }
    }
    return static_cast<int>(maximum);
}

void LongestSubstringWithoutRepeatingCharacters::test()
{
    std::cout << "3: Longest Substring Without Repeating Characters" << difficultyToString(difficulty).value() <<"\n";
    processExample("abcabcbb");
    processExample("bbbbb");
    processExample("pwwkew");
    processExample("aab");
    processExample("dvdf");
    processExample("uqinntq");
    processExample("aabaab!bb");
    std::cout << "------------------" << "\n";
}

void LongestSubstringWithoutRepeatingCharacters::processExample(std::string s)
{
    std::cout << "String: " << s << "\n";
    std::cout << "Max length: " << lengthOfLongestSubstring(s) << "\n";
}

