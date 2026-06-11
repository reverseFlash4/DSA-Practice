//
// Created by Kartik Mohan on 11/06/26.
//

#include "ReversePolishNotation.h"

#include <iostream>
#include <ostream>

void ReversePolishNotation::run() {
    std::vector<std::string> tokens = {"2","1","+","3","*"};
    std::cout<<reversePolishNotation(tokens)<<std::endl;
}

int ReversePolishNotation::reversePolishNotation(std::vector<std::string> tokens) {
    std::stack<int> st;
    for (const auto & token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (token == "+") {
                st.push(a+b);
            } else if (token == "-") {
                st.push(a-b);
            } else if (token == "*") {
                st.push(a*b);
            } else if (token == "/") {
                st.push(a/b);
            }
        } else {
            st.push(std::stoi(token));
        }
    }
    return st.top();
}
