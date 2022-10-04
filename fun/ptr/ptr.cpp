//
// Created by user on 2022-10-04.
//

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string a = "abcd";
    std::string *b = &a;
    std::cout << "b : " << b << '\n';
    std::cout << "*b : " << *b << '\n';

    std::cout << "/////////////////////////////////////////\n";
    std::unordered_map<std::string, int> umap;
    umap.insert({"test1", 1});
    umap.emplace("test5", 5);
    umap["test1"] = 4;

    auto c = umap.end();
    for (const auto &item: umap) {
        std::cout << item.first << " : " << item.second << '\n';
    }
    auto search = umap.find("test4");
    if (search != umap.end()) {
        std::cout << "found : " << search->first << " / " << search->second << '\n';
    } else {
        std::cout << "NotFound" << '\n';
    }

    umap["test1"]++;
    std::cout << umap["test1"] << '\n';
    std::cout << umap.size() << '\n';
    umap.erase("test1");
    std::cout << umap.size() << '\n';
    /**
     * 주목할 부분은 find 로 map 에서 데이터를 찾을 경우 이터레이터를 반환하는데, 이것은 포인터라는 점이다.
     * find 로 찾지 못할 경우에는 end 를 가리킨다.
     */
    return 0;
}