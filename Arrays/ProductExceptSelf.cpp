//
// Created by Kartik Mohan on 06/06/26.
//

#include "ProductExceptSelf.h"

#include <iostream>
#include <ostream>

void ProductExceptSelf::run() {
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    std::vector<int> result = ProductExceptSelf::productExceptSelf(nums);
    for (std::vector<int>::iterator it = result.begin(); it != result.end(); ++it) {
        std::cout << *it <<"  ";
    }

}

std::vector<int> ProductExceptSelf::productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> left(n);
    std::vector<int> right(n);
    left[0] = 1;
    right[n - 1] = 1;

    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    std::vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = left[i] * right[i];
    }

    return result;
}
