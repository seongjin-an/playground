//
// Created by seongjin on 22. 9. 18.
//

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(std::string input, std::string delimiter);

std::vector<std::string> split_debug(std::string input, std::string delimiter) {
    std::vector<std::string> ret;
    long long pos = 0;
    std::string token = "";
    while((pos = input.find(delimiter)) != std::string::npos) {
        long long pos = input.find(delimiter);
        std::cout << "POS : " << pos << '\n';
        if(pos == std::string::npos) break;
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    std::string s = "hello world. good to see you!";
    std::string d = " ";
    std::vector<std::string> a = split(s, d);
    for(std::string b : a) std::cout << b << "\n";
//    std::string s2 = "aaa bbbb c ddddde";
}

std::vector<std::string> split(std::string input, std::string delimiter) {
    std::vector<std::string> ret;
    long long pos = 0;
    std::string token = "";
    while ((pos = input.find(delimiter)) != std::string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}
