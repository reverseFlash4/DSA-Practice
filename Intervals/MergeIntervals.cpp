//
// Created by Kartik Mohan on 06/06/26.
//

#include "MergeIntervals.h"

#include <iostream>
#include <ostream>


void MergeIntervals::run() {
    std::vector<std::vector<int>> intervals;
    intervals.push_back({1,3});
    intervals.push_back({1,5});
    intervals.push_back({6,7});
    std::vector<std::vector<int>> result = MergeIntervals::mergeIntervals(intervals);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i][0] << ", " << result[i][1] << std::endl;
    }
}

std::vector<std::vector<int> > MergeIntervals::mergeIntervals(std::vector<std::vector<int>>& intervals) {
    std::vector<std::vector<int>> result;
    std::ranges::sort(intervals);
    result.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= result[result.size() - 1][1]) {
            result[result.size() - 1][1] = std::max(intervals[i][1], result[result.size() - 1][1]);
        } else {
            result.push_back(intervals[i]);
        }
    }
    return result;
}
