//
// Created by seongjin on 22. 1. 9..
//

#include <iostream>
#include <unordered_map>

using std::cout;
using std::endl;

struct HashFunction{
    std::size_t operator()(const int& key) const{
        return 1;
    }
};

int main(){
    std::unordered_map<int, std::string> um{
            {1, "10"},
            {2, "20"},
            {3, "30"},
            {4, "40"}
    };
    for(const std::pair<const int, std::string>& pair: um){
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << endl;
    for(const auto& [key, value]: um){
        cout << key << ": " << value << endl;
    }
    cout << endl;
    cout << um[3] << endl;
    cout << endl;

    std::unordered_map<int, std::string, HashFunction> um2;
    for(int i=0; i<100; i++){
        um2[i] = i;
    }
    cout << "um2.bucket_count(): " << um2.bucket_count() << endl;
    cout << "um2.bucket_size(0): " << um2.bucket_size(0) << endl;
    cout << "um2.bucket_size(1): " << um2.bucket_size(1) << endl;
}
// insert key: "abc", hash("abc") == 100
// 100 % 4 == 0
// find key: "cba", hash("cba") == 100
// 100 % 4 == 0

// b0, b1, b2, b3
// b0 -> "abc"
