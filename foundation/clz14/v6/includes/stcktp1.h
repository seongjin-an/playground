#ifndef STCKP1_H_
#define STCKP1_H_

template<typename T>
class Stack {
private:
    enum {
        SIZE = 10
    };
    int stacksize;
    T *items;
    int top;
public:
    explicit Stack(int ss = SIZE);

    Stack(const Stack &st);

    ~Stack() { delete[] items; }

    bool isempty() { return top == 0; }

    bool isfull() { return top == stacksize; }

    bool push(const T &item);

    bool pop(T &item);

    Stack &operator=(const Stack &st);
};

template<typename T>
Stack<T>::Stack(int ss) : stacksize(ss), top(0) {
    items = new T[stacksize];
}

template<typename T>
Stack<T>::Stack(const Stack<T> &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; i++) {
        items[i] = st.items[i];
    }
}

template<typename T>
bool Stack<T>::push(const T &item) {
    if (top < stacksize) {
        items[top++] = item;
        return true;
    } else
        return false;
}

template<typename T>
bool Stack<T>::pop(T &item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else
        return false;
}

template <typename T>
Stack<T> &Stack<T>::operator=(const Stack<T> &st) {
    if (this == &st)
        return *this;
    delete[] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}

#endif