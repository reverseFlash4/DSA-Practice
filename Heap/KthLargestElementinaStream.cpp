//
// Created by Kartik Mohan on 11/06/26.
//

#include "KthLargestElementinaStream.h"

KthLargestElementinaStream::KthLargestElementinaStream(int k, std::vector<int> &nums) {
        kth = k;
        for (int num : nums) {
            add(num);
        }
}

int KthLargestElementinaStream::add(int num) {
    minHeap.push(num);
    if (minHeap.size() > kth) {
        minHeap.pop();
    }
    return minHeap.top();
}