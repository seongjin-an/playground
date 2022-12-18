
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
class Queue{
    private:
        size_t _size;
        size_t _capacity;
        T * _items;
    public:
        Queue(): _size(0), _capacity(4), _items(new T[_capacity]) {
            cout << "QUEUE CONSTRUCTION" << '\n';
        }
        ~Queue() {
            delete [] _items;
        }
        void push(T item) {
            if (_size < _capacity) {
                _items[_size++] = item;
            } else {
                size_t newCapacity = _capacity * 2;
                T * oldItems = _items;
                T * newItems = new T[newCapacity];

                copy(oldItems, oldItems + _capacity, newItems);

                _capacity = newCapacity;
                _items = newItems;

                delete [] oldItems;

                push(item);
            }
            
        }

        void pop() {
            --_size;
        }

        T & top() {
            return _items[_size - 1];
        }
};

