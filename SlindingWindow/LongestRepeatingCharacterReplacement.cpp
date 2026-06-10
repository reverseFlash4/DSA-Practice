//
// Created by Kartik Mohan on 11/06/26.
//

#include "LongestRepeatingCharacterReplacement.h"

#include <iostream>
#include <ostream>

void LongestRepeatingCharacterReplacement::run() {
    std::string s = "AABABBA";
    int k = 1;
    int result = longestRepeatingCharacterReplacement(s, k);
    std::cout << "Longest Repeating Character Replacement: " << result << std::endl;
}

int LongestRepeatingCharacterReplacement::longestRepeatingCharacterReplacement(std::string s, int k) {
    int left = 0, right = 0;
    int maxCount = 0;
    int charCount[26] = {0};

    while (right < s.size()) {
        charCount[s[right] - 'A']++;
        maxCount = std::max(maxCount, charCount[s[right] - 'A']);

        if (right - left + 1 - maxCount > k) {
            charCount[s[left] - 'A']--;
            left++;
        }
        right++;
    }
    return right - left;
}
