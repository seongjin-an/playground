//
// Created by seongjin on 22. 6. 7..
//

#include <iostream>
#include <array>

class InsertSort {
public:
    InsertSort(){};
    void insertionSort(std::array<int, 8> arr, const int count){
        int temp = 0, x = 0;
        for(int i = 1; i < count; i++){
            temp = arr[i];
            x = i;
            while((x > 0) && (arr[x - 1] > temp)){
                arr[x] = arr[x - 1];
                x -= 1;
            }
            arr[x] = temp;
            std::cout << "반복 " << i << ": " << std::endl;

        }
    }
};

int main() {
    std::cout << "hello" << std::endl;
    std::array<int, 8> array{80, 50, 70, 10, 60, 20, 40, 30};
    InsertSort insertSort;
    insertSort.insertionSort(array, 8);
}