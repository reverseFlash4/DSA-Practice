//
// Created by Kartik Mohan on 07/06/26.
//

#include "ThreeSum.h"

#include <iostream>
#include <ostream>

void ThreeSum::run() {
    std::vector<int> numbers = {-1, 0, 1, 2, -1, -4};
    auto result = threeSum(numbers);
    for (auto &triplet: result) {
        for (auto &num: triplet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> ThreeSum::threeSum(std::vector<int> &numbers) {
    std::vector<std::vector<int>> result;
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        int j = i + 1;
        int k = numbers.size()-1;
        while (j < k) {
            if (numbers[i] + numbers[j] + numbers[k] == 0) {
                result.push_back(std::vector<int>{numbers[i], numbers[j], numbers[k]});
                j++;
                k--;
                while (j<k && numbers[j] == numbers[j-1]) {
                    j++;
                }
            } else if (numbers[i] + numbers[j] + numbers[k] > 0) {
                k--;
            } else {
                j++;
            }
        }
    }
    return result;
}
