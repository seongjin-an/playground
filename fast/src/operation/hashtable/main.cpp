//
// Created by seongjin on 21. 12. 20..
//

#include "Hashtable.h"

using namespace std;

int main(){
    HashTable hashTable;

    hashTable["abc"] = "def";
    cout << hashTable["abc"] << endl;

    hashTable["abc"] = "123";
    cout << hashTable["abc"] << endl;

    hashTable["cba"] = "456";
    cout << hashTable["cba"] << endl;
    cout << hashTable["abc"] << endl;
}
// bucket, bucket, bucket, bucket, bucket, bucket, bucket, bucket
// key: "abc" <- hash
// value: "def"