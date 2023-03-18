#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint;
void show(const vint &v, int cols);

int main() {
    using std::slice;
    using std::cout;
    vint valint(SIZE);

    int i;
    for (i = 0; i < SIZE; i++)
        valint[i] = std::rand() %10;
    cout << "원래의 배열:\n";
    show(valint, 3);

    vint vcol(valint[slice(1,4,3)]);
    cout << "제 2열:\n";
    show(vcol, 1);

    vint vrow(valint[slice(3,3,1)]);
    cout << "제 2행:\n";
    show(vrow, 3);

    valint[slice(2,4,3)] = 10;
    cout << "마지막 열을 값 10으로 설정:\n";
    show(valint, 3);

    cout << "제 1열을 그 다음 두 열의 합으로 설정:\n";
    valint[slice(0,4,3)] = vint(valint[slice(1,4,3)]) + vint(valint[slice(2,4,3)]);
    show(valint, 3);

    return 0;
}

void show(const vint &v, int cols) {
    using std::cout;

    int lim = v.size();
    for (int i = 0; i < lim; ++i) {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << '\n';
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << '\n';
}