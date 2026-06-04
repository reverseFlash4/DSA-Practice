//
// Created by Kartik Mohan on 04/06/26.
//

#include "ValidAnagram.h"
#include <algorithm>
#include <iostream>
bool ValidAnagram::solve(const std::string& s, const std::string& t) {
    std::string sortedS = s;
    std::string sortedT = t;

    std::sort(sortedS.begin(), sortedS.end());
    std::sort(sortedT.begin(), sortedT.end());

    return sortedS == sortedT;

}

void ValidAnagram::run() {
    std::string s1 = "listen";
    std::string t1 = "silent";
    std::string s2 = "hello";
    std::string t2 = "world";

    std::cout << "s1 and t1 are anagrams: " << (solve(s1, t1) ? "Yes" : "No") << std::endl;
    std::cout << "s2 and t2 are anagrams: " << (solve(s2, t2) ? "Yes" : "No") << std::endl;
}
