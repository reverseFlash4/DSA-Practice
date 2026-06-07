//
// Created by Kartik Mohan on 07/06/26.
//

#include "ValidPalindrome.h"

#include <iostream>
#include <ostream>

void ValidPalindrome::run() {
    std::string s = "Was it a car or a cat I saw?";
    bool isValid = ValidPalindrome::isPalindrome(s);
    std::cout << "Is the string a palindrome? " << (isValid ? "Yes" : "No") << std::endl;
}

bool ValidPalindrome::isPalindrome(std::string s) {
    std::string str;
    for (char c : s) {
        if (isalnum(c)) {
            str += tolower(c);
        }
    }
    int left = 0, right = str.length() - 1;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}