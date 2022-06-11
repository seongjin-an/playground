//
// Created by seongjin on 22. 6. 7..
//

#include <iostream>
#include <array>

class InsertSort {
public:
    InsertSort(){};

    template<std::size_t N>
    void insertionSort(std::array<int, N> arr){
        int temp = 0, x = 0;
        for(int i = 0; i < N; i++){
            temp = arr[i];
            x = i;
            while((x > 0) && (arr[x - 1] > temp)){
                arr[x] = arr[x - 1];
                x -= 1;
            }
            arr[x] = temp;
            std::cout << "반복 " << i << std::endl;
            printSort(arr);
        }
    }

    template<std::size_t N>
    void printSort(std::array<int, N> arr){
        for(int i = 0; i < N; i++){
            std::cout << arr[i] << std::endl;
        }
    }
};

template< std::size_t N >
void f(int (&arr)[N])
{
    std::cout << sizeof(arr) << '\n';
    for(int i = 0; i < N; i++){
        std::cout << arr[i] << std::endl;
    }
}
int main() { 
    std::cout << "hello" << std::endl;
    std::array<int, 8> array{80, 50, 70, 10, 60, 20, 40, 30};

    InsertSort insertSort;
    insertSort.insertionSort(array);

//    std::cout  << std::endl;
//    std::cout << "sizeof(array): " << sizeof(array) << std::endl;
//    int imsi [3]{1,2,3};
//    std::cout << "sizeof(imsi): " << sizeof(imsi) << std::endl;
//    std::cout << "sizeof(imsi)/sizeof(int): " << sizeof(imsi) / sizeof(int) << std::endl;
//    f(imsi);
}
