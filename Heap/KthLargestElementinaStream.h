//
// Created by Kartik Mohan on 11/06/26.
//

#ifndef DSA_PRACTICE_KTHLARGESTELEMENTINASTREAM_H
#define DSA_PRACTICE_KTHLARGESTELEMENTINASTREAM_H
#include <queue>
#include <vector>


class KthLargestElementinaStream {
    public:
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    int kth;
    KthLargestElementinaStream(int k, std::vector<int>& nums);
    int add(int val);

};


#endif //DSA_PRACTICE_KTHLARGESTELEMENTINASTREAM_H
