
#include <iostream>
#include "foo.h"
#include "shape.h"

int main() {
    // int i;
    std::cout << "HELLO WORLD" << '\n';
    std::cout << "foo(): "<< foo() << '\n';
    Rectangle rec(10, 5);
    std::cout << "rec.getSize(): " << rec.getSize() << '\n';
    return 0;
}