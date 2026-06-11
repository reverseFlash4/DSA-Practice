//
// Created by Kartik Mohan on 11/06/26.
//

#include "MinStack.h"

#include <stack>
#include <utility>

std::stack<std::pair<int,int>> minStack;
MinStack::MinStack() {

}

void MinStack::push(int x) {
    if(minStack.empty()){
        minStack.push({x,x});
    } else {
        int currentMin = minStack.top().second;
        minStack.push({x,std::min(x,currentMin)});
    }
}
void MinStack::pop() {
    if(!minStack.empty()) {
        minStack.pop();
    }
}
int MinStack::getMin() {
    return minStack.top().second;
}
int MinStack::top() {
    return minStack.top().first;
}
