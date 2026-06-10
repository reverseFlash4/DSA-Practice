//
// Created by Kartik Mohan on 11/06/26.
//

#include "PermutationinString.h"

#include <iostream>
#include <ostream>

void PermutationinString::run() {
    std::string s1 = "ab";
    std::string s2 = "eidbaooo";
    std::cout<<isPossible(s1, s2)<<std::endl;
}

bool PermutationinString::isPossible(std::string s1, std::string s2) {
    if (s1.size() > s2.size()) {
        return false;
    }
    std::vector<int> s1Freq(26,0);
    std::vector<int> s2Freq(26,0);
    for (int i: s1) {
        s1Freq[s1[i] - 'a']++;
    }
    int l = 0;
    for (int r = 0; r < s2.size(); ++r) {
        s2Freq[s2[r] - 'a']++;
        while (l <= r && !compareStrings(s1Freq, s2Freq)) {
            s2Freq[s2[l] - 'a']--;
            l++;
        }
        if (s2Freq == s1Freq) {
            return true;
        }
    }
    return false;
}

bool PermutationinString::compareStrings(std::vector<int> s1Freq, std::vector<int> s2Freq) {
    for (int i=0; i < s1Freq.size(); i++) {
        if (s1Freq[i] < s2Freq[i]) {
            return false;
        }
    }
    return true;
}
