//
// Created by Kartik Mohan on 11/06/26.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

#include <iostream>
#include <ostream>
#include <unordered_set>

void LongestSubstringWithoutRepeatingCharacters::run() {
    std::string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    std::cout << "Length of longest substring without repeating characters: " << result << std::endl;
}

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s) {
    std::unordered_set<char> charSet;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        while (charSet.count(s[right]) > 0) {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxLength = std::max(maxLength, right - left + 1);
    }

    return maxLength;
}
