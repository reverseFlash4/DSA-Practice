//
// Created by Kartik Mohan on 04/06/26.
//

#include "TopKFrequentElements.h"

#include <iostream>
#include <map>
#include <ostream>


void TopKFrequentElements::run() {
        std::vector<int> nums = {1,1,2,2,2,2,2,3,3,3,3,3};
        int k = 2;
        std::vector<int> res = TopKFrequentElements::topKFrequentElements(nums, k);
        for (int i : res) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
}

std::vector <int> TopKFrequentElements::topKFrequentElements(std::vector<int> &nums, int k) {
    std::vector <int> res;
    std::map<int, int> freqMap;
    for (int i = 0; i < nums.size(); i++) {
        freqMap[nums[i]]++;
    }
    if ( k > freqMap.size() ) {throw std::out_of_range("k is too large");}
    std::vector<std::pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
    std::sort(freqVec.begin(), freqVec.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
    });
    for (int i = 0; i < k; i++) {
        res.push_back(freqVec[i].first);
    }
    return res;
}
