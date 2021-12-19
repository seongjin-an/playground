//
// Created by seongjin on 21. 12. 20..
//

#ifndef PLAYGROUND_HASHTABLE_H
#define PLAYGROUND_HASHTABLE_H

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using Key = std::string;
using Value = std::string;
using KeyValue = std::pair<std::string, std::string>;

class Bucket{
private:
    std::vector<KeyValue> _items;
public:
    Value& get(const Key& key);
};

class HashTable{
private:
    std::vector<Bucket> _buckets;
    int hash(const Key& key) const;
public:
    HashTable(int size = 100);
    Value& operator[](Key key);
};

#endif //PLAYGROUND_HASHTABLE_H
