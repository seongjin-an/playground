#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

void print(const std::string &s) { std::cout << s << ' '; }

int main() {
    using namespace std;
    const int N = 6;
    string s1[N] = {"buffon", "thinkers","for", "heavy", "can", "for"};
    string s2[N] = {"metal", "any","food", "elegant", "deliver"};

    set<string> A(s1, s1 + N);
    cout << "set A: ";
    for_each(A.begin(), A.end(), print);
    cout << '\n';
    set<string> B(s2, s2 + N);
    cout << "set B: ";
    for_each(B.begin(),B.end(), print);
    cout << '\n';

    ostream_iterator<string, char> out(cout, " ");
    cout << "집합 A: ";
    copy(A.begin(), A.end(), out);
    cout << '\n';
    cout << "집합 B: ";
    copy(B.begin(), B.end(), out);
    cout << '\n';

    cout << "A 와 B 의 합집합:\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << "\n";

    cout << "A 와 B 의 교집합:\n";
    set_intersection(A.begin(), A.end(), B.begin(),B.end(), out);
    cout << '\n';

    cout << "A 와 B 의 차집합:\n";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << '\n';

    set<string> C;
    cout << "집합C:\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
    copy(C.begin(), C.end(),out);
    cout << '\n';

    string s3("grungy");
    C.insert(s3);
    cout << "삽입한 후의 집합 C:\n";
    copy(C.begin(), C.end(), out);
    cout << '\n';

    cout << "특정 범위를 표시:\n";
    copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
    cout << '\n';


    return 0;
}