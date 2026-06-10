//
// Created by Kartik Mohan on 11/06/26.
//

#include "MinimumWindowSubstring.h"

#include <iostream>
#include <map>
#include <ostream>

void MinimumWindowSubstring::run() {
    std::string s = "ADOBECODEBANC";
    std::string t = "ABC";
    std::cout << minimumWindow(s, t) << std::endl;
}

std::string MinimumWindowSubstring::minimumWindow(std::string s, std::string t) {
    if (s.length() < t.length()) {
        return "";
    }
    std::map<char, int> ms;
    std::map<char, int> mt;
    for (int i = 0; i < t.length(); i++) {
        mt[t[i]]++;
    }
    int l = 0;
    std::string ans = "";
    for (int r = 0; r < s.length(); r++) {
        ms[s[r]]++;
        while (l <= r) {
            bool valid = true;
            for (auto &[key, value]: mt) {
                if (ms[key] < value) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                if (ans == "" || r - l + 1 < ans.length()) {
                    ans = s.substr(l, r - l + 1);
                }
                ms[s[l]]--;
                l++;
            } else {
                break;
            }
        }
    }
    return ans;
}
