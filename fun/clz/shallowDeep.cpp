#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Student {
    public:
        char * name = nullptr;
        int age;
        void setName(const char * _name) {
            if (name != nullptr) delete name;
            name = new char[strlen(_name) + 1];
            strcpy(name, _name);
        }
        Student(const char * _name, int _age) {
            name = new char[strlen(_name) + 1];
            strcpy(name, _name);
            age = _age;
        }
        //Student(const Student& s)
        //{
        //	cout << "얕은 복사 생성자 호출" << endl;
        //	name = s.name;
        //	age = s.age;
        //}
        // Student(const Student& s)
        // {
        //     cout << "깊은 복사 생성자 호출" << endl;
        //     name = new char[strlen(s.name) + 1];
        //     strcpy(name, s.name);
        //     age = s.age;
        // }
};
/**
복사생성자를 정의하지 않으면 컴파일러가 기본적으로 자신과 동일한 타입의 객체에 대한 레퍼런스(&)를 인자로 받는 생성자를 만들어준다.
s2의 포인터 변수 name이 가리키는 공간이 s1의 name이 가리키는 곳과 동일하며 우리는 이러한 복사 메커니즘을 얕은 복사(Shallow Copy)라고 부른다.
그렇다면 얕은 복사가 항상 괜찮은 걸까?
1.만약 s1에서 name을 delete한 뒤 s2의 name에 접근하려 한다면 delete된 힙 공간에 접근하는 문제가 발생
2.나아가 두 객체의 포인터 변수 name이 같은 메모리 공간을 참조하기에 어느 한 곳에서 값을 변경하면 변경된 값이 모두에게 반영
*/
int main(){
    Student s1 = Student("Kim", 18);
    Student s2 = s1;
    s1.setName("hello");
    cout << &s1 << '\n';
    cout << s1.name << " " << s1.age << '\n';
    cout << &s2 << '\n';
    cout << s2.name << " " << s2.age << '\n';
    return 0;
}