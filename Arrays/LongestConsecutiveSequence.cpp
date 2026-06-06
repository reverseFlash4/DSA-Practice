//
// Created by Kartik Mohan on 07/06/26.
//

#include "LongestConsecutiveSequence.h"

#include <iostream>
#include <ostream>
#include<unordered_set>

void LongestConsecutiveSequence::run() {
        std::vector<int> nums;
        nums.push_back(100);
        nums.push_back(4);
        nums.push_back(200);
        nums.push_back(1);
        nums.push_back(3);
        nums.push_back(2);

        int result = LongestConsecutiveSequence::longestConsecutiveSequence(nums);
        std::cout<<std::endl;
        std::cout << result << std::endl;
}

int LongestConsecutiveSequence::longestConsecutiveSequence(std::vector<int> &nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;

    for (int num : numSet) {
        if (!numSet.count(num - 1)) {
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.count(currentNum + 1)) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = std::max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
