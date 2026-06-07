//
// Created by Kartik Mohan on 07/06/26.
//

#include "LastStoneWeight.h"

#include <iostream>
#include <ostream>

void LastStoneWeight::run() {
    std::vector<int> stones = {2,7,4,1,8,1};
    std::cout << lastStoneWeight(stones) << std::endl;
}

int LastStoneWeight::lastStoneWeight(std::vector<int>& stones) {
    std::priority_queue<int> pq(stones.begin(), stones.end());
    while (pq.size() > 1) {
        int stone1 = pq.top();
        pq.pop();
        int stone2 = pq.top();
        pq.pop();
        if (stone1 != stone2) {
            pq.push(stone1 - stone2);
        }
    }
    return pq.empty() ? 0 : pq.top();
}
