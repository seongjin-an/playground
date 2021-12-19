//
// Created by seongjin on 21. 12. 20..
//

#include "Hashtable.h"

Value& Bucket::get(const Key &key) {
    for(KeyValue& keyValue: _items){
        if(keyValue.first == key){
            return keyValue.second;
        }
    }
    _items.push_back(std::make_pair(key, Value()));
    return _items.back().second;
}

HashTable::HashTable(int size)
        : _buckets(std::vector<Bucket>(size)){

}
int HashTable::hash(const Key& key) const {
    int h = 0;
    for(char ch: key){
        h += ch;
    }
    return h;
}
Value& HashTable::operator[](Key key) {
    int bucketIndex = hash(key) % _buckets.size();
    Bucket& bucket = _buckets[bucketIndex];
    return bucket.get(key);
}