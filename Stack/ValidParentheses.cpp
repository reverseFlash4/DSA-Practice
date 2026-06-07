//
// Created by Kartik Mohan on 07/06/26.
//

#include "ValidParentheses.h"

#include <iostream>
#include <ostream>

void ValidParentheses::run() {
    std::string s = "()[]{}";
    std::cout << isValid(s) << std::endl;
}

bool ValidParentheses::isValid(std::string const& s) {
    std::stack<char> st;
    for (auto const& c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
