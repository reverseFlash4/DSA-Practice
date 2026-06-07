//
// Created by Kartik Mohan on 07/06/26.
//

#include "TwoSumTwo.h"

#include <iostream>
#include <ostream>

void TwoSumTwo::run() {
    std::vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(numbers, target);
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;
}

std::vector <int> TwoSumTwo::twoSum(std::vector<int>& numbers, int target) {
    int i=0, j=(int)numbers.size()-1;
    while (i<j) {
        int sum = numbers[i] + numbers[j];
        if (sum == target) {
            return {i+1, j+1};
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return {};
}
