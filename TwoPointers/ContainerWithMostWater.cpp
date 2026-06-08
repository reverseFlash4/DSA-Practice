//
// Created by Kartik Mohan on 09/06/26.
//

#include "ContainerWithMostWater.h"
#include <iostream>

void ContainerWithMostWater::run() {
    std::vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = containerWithMostWater(nums);
    std::cout << "Max area: " << result << std::endl;
}

int ContainerWithMostWater::containerWithMostWater(std::vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int height = std::min(nums[left], nums[right]);
        int width = right - left;
        int area = height * width;
        maxArea = std::max(maxArea, area);

        if (nums[left] < nums[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}
