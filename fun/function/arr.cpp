#include <iostream>

using namespace std;

void func(int arr[][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void func2(int *arr[10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void func3(int **arr) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
template<size_t rows, size_t cols>
void func4(int (&arr)[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void func5(int (*arr)[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // cout << *(*(*(arr + i) + j)) << ' ';
            cout << (*arr)[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void func6(int (*arr)[10], size_t rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 10; j++) {
            // cout << *(*(arr + i) + j) << ' ';
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void func7(int **arr, size_t rows, size_t cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
int main() {
    int array1[10][10] = {{1,2,3,4,5}};
    func(array1);
    cout << "//////////////////////////////////////////////////" << '\n';

    int *array2[10];
    for (int i = 0; i < 10; i++) array2[i] = new int[10];
    func2(array2);
    cout << "//////////////////////////////////////////////////" << '\n';

    int **array3;
    array3 = new int*[10];
    for (int i = 0; i < 10; i++) {
        array3[i]= new int[10];
    }
    func3(array3);
    cout << "//////////////////////////////////////////////////" << '\n';
    func4(array1);
    cout << "//////////////////////////////////////////////////" << '\n';
    func5(&array1);
    cout << "//////////////////////////////////////////////////" << '\n';
    func6(array1, 10);
    cout << "//////////////////////////////////////////////////" << '\n';
    func7(array3, 10, 10);

    int array4[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int (*ptr)[4] = array4;

    cout << "arr[0] : " << array4[0] << '\n';
    cout << "*ptr : " << *ptr << '\n';
    cout << "*(ptr + 0) : " << *(ptr + 0) << '\n';
    cout << '\n';

    cout << "arr[1] : " << array4[1] << '\n';
    cout << "*(ptr + 1) : " << *(ptr + 1) << '\n';
    cout << '\n';

    cout << "arr[2] : " << array4[2] << '\n';
    cout << "*(ptr + 2) : " << *(ptr + 2) << '\n';
    cout << '\n';

    cout << "arr[0][0] : " << array4[0][0] << '\n';
    cout << "(*(ptr + 0) + 0): " << (*(ptr + 0) + 0) << '\n';
    cout << "*(*(ptr + 0) + 0): " << *(*(ptr + 0) + 0) << '\n';
    cout << '\n';

    return 0;
}