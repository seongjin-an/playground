//
// Created by seongjin on 22. 6. 16.
//

#include <iostream>

class HeapSort {
private:
    int SIZE = 0;
    int heapArr[20];
public:
    void insertHeap(int input) {
        int _size = ++SIZE;
        while ((_size != 1) && (input > heapArr[_size / 2])) {
            heapArr[_size] = heapArr[_size / 2];
            _size /= 2;
        }
        heapArr[_size] = input;
    }

    int getHeapSize() {
        return SIZE;
    }

    int deleteHeap() {
        int parent = 0;
        int child = 0;
        int data = heapArr[1];
        int temp = heapArr[SIZE];

        SIZE--;
        parent = 1;
        child = 2;

        while (child <= SIZE) {
            if ((child < SIZE) && (heapArr[child] < heapArr[child + 1])) {
                child++;
            }
            if (temp >= heapArr[child]) break;
            heapArr[parent] = heapArr[child];
            parent = child;
            child *= 2;
        }
        heapArr[parent] = temp;
        return data;
    }

    void printHeap() {
        for (int i = 1; i <= SIZE; i++) {
            std::cout << heapArr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    HeapSort h;
    h.insertHeap(80);
    h.insertHeap(50);
    h.insertHeap(70);
    h.insertHeap(10);
    h.insertHeap(60);
    h.insertHeap(20);

    h.printHeap();
}