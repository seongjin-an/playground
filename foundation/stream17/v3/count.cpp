#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    using namespace std;
    if (argc== 1) {
        cerr << "사용법: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    long count;
    long total = 0;
    char ch;

    for (int file = 1; file < argc; file++) {
        fin.open(argv[file]);
        if (!fin.is_open()) {
            cerr << argv[file] << " 파일을 열 수 없습니다.\n";
            fin.clear();
            continue;
        }
        count = 0;
        while (fin.get(ch))
            count++;
        cout << argv[file] << " 파일에 들어 있는 문자 수는 " << count << "입니다.\n";
        total += count;
        fin.clear();
        fin.close();
    }
    cout << "전체 파일에 들어 있는 문자 수는 " << total << "입니다.\n";
    return 0;
}