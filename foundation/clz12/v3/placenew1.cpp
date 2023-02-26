#include <iostream>
#include <string>
#include <new>

using namespace std;

const int BUF = 512;

class JustTesting{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Juest Testing", int n = 0){
        words = s;
        number = n;
        cout << words << " 생성\n";
    }
    ~JustTesting() {
        cout << words << " 파괴\n";
    }
    void Show() const{
        cout << words << ", " << number << '\n';
    }
};

int main() {
    char * buffer = new char[BUF];
    JustTesting * pc1, * pc2;
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "메모리 블록 주소:\n" << "buffer: " << (void*) buffer << "    heap: " << pc2 << '\n';
    cout << "메모리 내용:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting * pc3, * pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "메모리 내용:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    delete [] buffer;
    cout << "종료\n";
    return 0;
}