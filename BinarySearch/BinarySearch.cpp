//
// Created by Kartik Mohan on 07/06/26.
//

#include "BinarySearch.h"

#include <iostream>
#include <ostream>
#include <vector>

void BinarySearch::run() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    int target = 4;
    int result = BinarySearch::binarySearch(v, target);
    std::cout << result << std::endl;
}

int BinarySearch::binarySearch(std::vector<int> &v, int target) {
        int low = 0;
        int high = v.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] == target) {
                return mid;
            } else if (v[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
}
