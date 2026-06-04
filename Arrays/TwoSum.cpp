//
// Created by Kartik Mohan on 04/06/26.
//

#include "TwoSum.h"

#include <iostream>
#include <map>
#include <vector>


void TwoSum::run() {
    std::vector<int> numbers = {2, 11, 7, 15};
    int target = 26;
    TwoSum twoSum;
    std::vector<int> result = twoSum.twoSum(numbers, target);
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
}

std::vector<int> TwoSum::twoSum(std::vector<int> &numbers, int target) {
    std::vector<int> result;
    std::map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(numMap[complement]);
            result.push_back(i);
            return result;
        }
        numMap[numbers[i]] = i;
    }
    return result;
}
