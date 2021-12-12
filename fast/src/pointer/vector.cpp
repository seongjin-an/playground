//
// Created by seongjin on 21. 12. 12..
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(10);
    for(int i=0; i<vec.size(); ++i){
        cout << vec[i] << endl;
    }

    vector<int> vec2(5, 2);
    for(int num: vec2)
        cout << num << endl;
    cout << endl;

    vec2.resize(3);
    for(int num: vec2)
        cout << num << endl;
    cout << endl;

    vec2.resize(10, 9);
    for(int num: vec2)
        cout << num << endl;
    cout << endl;

    vector<int> vec3;
    cout << vec3.size() <<endl;
    vec3.push_back(10);
    cout << vec3[0] << endl;
    cout << vec3.size() << endl;
    vec3.pop_back();
    cout << vec3.size() << endl;

    for(int i=0; i<10; ++i){
        vec3.push_back(i);
        cout << vec3.size() << endl;
        cout << vec3.data() << endl;
    }


}