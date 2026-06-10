//
// Created by Kartik Mohan on 10/06/26.
//

#include "BestTimetoBuyandSellStock.h"

#include <iostream>
#include <ostream>

void BestTimetoBuyandSellStock::run() {
    std::vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);
    std::cout << "Maximum profit: " << result << std::endl;
}

int BestTimetoBuyandSellStock::maxProfit(std::vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }

    return maxProfit;
}
