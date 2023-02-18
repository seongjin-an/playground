#include <iostream>

template <typename T,unsigned N>
class Array {
private:
    T data[N];
public:
    Array(T (&arr)[N]) {
        for (int i = 0; i < N; i++) {
            data[i] = arr[i];
        }
    }

    T * get_array() {
        return data;
    }

    unsigned size() {
        return N;
    }

    void printAll() {
        for (int i = 0; i < N; i++) {
            std::cout << data[i] << ' ';
        }
        std::cout << '\n';
    }
};

int main(void) {
    int arr[3] = {1,2,3};
    Array<int, 3> arr_w(arr);
    arr_w.printAll();
    return 0;
}