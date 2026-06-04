#include "ContainsDuplicate.h"

#include <iostream>
#include <set>

bool ContainsDuplicate::solve(const std::vector<int>& vec) {
    std::set<int> st;
    for (int num: vec) {
        if (st.find(num) != st.end()) {
            return true;
        }
        st.insert(num);
    }
    return false;
}

void ContainsDuplicate::run() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5, 1};

    std::cout << "vec1 contains duplicate: " << (solve(vec1) ? "Yes" : "No") << std::endl;
    std::cout << "vec2 contains duplicate: " << (solve(vec2) ? "Yes" : "No") << std::endl;
}
