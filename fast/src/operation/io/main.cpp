//
// Created by seongjin on 21. 12. 19..
//

#include "Io.h"

using namespace std;

int main(){
    Vector v{1,2,3};
    cout << v << endl;//operator<<(cout, v);
    operator<<(cout, v).operator<<(endl);

//    Vector v2;
//    cin >> v2;
//    cout << v2 << endl;

    Vector v3{0,0,0};
    cout << ~v3 << endl;// const Vector& v4 = Vector{0,0,0};

    Vector v4{1,5,122};
    cout << (v3 & v4) << endl;
    cout << (v3 | v4) << endl;

    Vector v5{1,5,122};
    cout << (v4 ^ v5) << endl;

    const Vector v6{1,4,8};
    cout << (v6 << 5) << endl;
    cout << (v6 >> 1) << endl;
}