//
// Created by Kartik Mohan on 09/06/26.
//

#include "TrappingRainWater.h"
#include <iostream>

void TrappingRainWater::run() {
    std::vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int result = trappingWater(height);
    std::cout << "Trapped water: " << result << std::endl;
}

int TrappingRainWater::trappingWater(std::vector<int> &height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int trappedWater = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            leftMax = std::max(leftMax, height[left]);
            trappedWater += leftMax - height[left];
            left++;
        } else {
            rightMax = std::max(rightMax, height[right]);
            trappedWater += rightMax - height[right];
            right--;
        }
    }

    return trappedWater;
}
