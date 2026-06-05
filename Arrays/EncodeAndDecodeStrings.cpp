//
// Created by Kartik Mohan on 06/06/26.
//

#include "EncodeAndDecodeStrings.h"
#include <iostream>

void EncodeAndDecodeStrings::run() {
    std::vector<std::string> strs = {"Hello", "World", "DSA"};
    std::string encoded = encode(strs);
    std::cout << "Encoded string: " << encoded << std::endl;

    std::vector<std::string> decoded = decode(encoded);
    std::cout << "Decoded strings: ";
    for (const auto &str: decoded) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}

std::string EncodeAndDecodeStrings::encode(const std::vector<std::string> &strs) {
    std::string encoded;
    for (const auto &str: strs) {
        encoded += std::to_string(str.size()) + "#" + str;
    }
    return encoded;
}

std::vector<std::string> EncodeAndDecodeStrings::decode(const std::string &encoded) {
    std::vector<std::string> decoded;
    for (int i = 0; i < encoded.size(); ++i) {
        std::string st = "";
        int len = 0;
        while (encoded[i] != '#') {
            st += encoded[i];
            ++i;
        }
        len = std::stoi(st);
        std::string str = encoded.substr(i + 1, len);
        decoded.push_back(str);
        i += len;
    }
    return decoded;
}


