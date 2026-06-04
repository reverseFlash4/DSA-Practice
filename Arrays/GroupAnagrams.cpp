//
// Created by Kartik Mohan on 04/06/26.
//

#include "GroupAnagrams.h"

#include <iostream>
#include <ostream>
#include <unordered_map>

void GroupAnagrams::run() {
    std::vector<std::string> anagramVec = {"eat", "tea", "tan", "ate", "nat", "bat"};
    GroupAnagrams anagrams;
    std::vector<std::vector<std::string>> anagramRes = GroupAnagrams::groupAnagrams(anagramVec);
    for (const auto& ans : anagramRes) {
        for (const auto& str : ans) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<std::string>> GroupAnagrams::groupAnagrams(std::vector<std::string> &strs) {
    std::vector<std::vector<std::string>> result;
    std::unordered_map<std::string, std::vector<std::string>> anagramMap;

    for (const std::string& str : strs) {
        std::string sortedStr = str;
        std::ranges::sort(sortedStr);
        anagramMap[sortedStr].push_back(str);
    }

    for (const auto& pair : anagramMap) {
        result.push_back(pair.second);
    }

    return result;
}
