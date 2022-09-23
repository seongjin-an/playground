//
// Created by user on 2022-09-23.
//

#include <iostream>
#include <utility>
#include <set>
#include <string>

int main() {
    std::set<std::pair<std::string, int>> st;
    st.insert({"test",1 });
    st.insert({"test",1 });
    st.insert({"test",1 });
    st.insert({"test",1 });
    st.insert({"test2", 2});
    std::cout << "st.size() : " << st.size() << '\n';
    for(auto it : st) {
        std::cout << "it.first : " << it.first << " / it.second : " << it.second << '\n';
    }
    std::set<int> st2;
    st2.insert(1);
    st2.insert(2);
    st2.insert(2);
    for(auto it : st2) {
        std::cout << it << '\n';
    }
    std::cout << "///////////////////////////////////" << '\n';
    std::multiset<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(90);
    s.insert(85);
    s.insert(45);
    std::cout << "multiset elements\n";
    for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << "*it : " << *it << '\n';
    }
    std::cout << '\n';

    auto it1 = s.find(10);
    auto it2 = s.find(90);

    s.erase(it1, it2);//from ~ to ~
    std::cout << "multiset elements\n";
    for(auto it = s.begin(); it != s.end(); it++) {
        std::cout << "*it : " << *it << '\n';
    }

    std::cout << '\n';
    std::cout << "s.begin() : " << *(s.begin()) << '\n';
    s.erase(s.begin());//position
    std::cout << "multiset elements\n";
    for(auto it = s.begin(); it != s.end(); it++) {
        std::cout << "*it : " << *it << '\n';
    }
    return 0;
}