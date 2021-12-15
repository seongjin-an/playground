//
// Created by seongjin on 21. 12. 15..
//

#include <iostream>
#include <string>

using namespace std;

enum struct RequestType{
    Login, Register, Update, Delete
};

bool onLogin(string id, string password){
    cout << "onLogin" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onRegister(string id, string password){
    cout << "onRegister" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onUpdate(string id, string password){
    cout << "onUpdate" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}
bool onDelete(string id, string password){
    cout << "onDelete" << endl;
    cout << id << endl;
    cout << password << endl;
    return true;
}

int main(){
    bool (*callbacks[])(string, string){
        onLogin, onRegister, onUpdate, onDelete
    };
    callbacks[(int)RequestType::Login]("david", "1234");
    callbacks[(int)RequestType::Register]("david", "1234");
    callbacks[(int)RequestType::Update]("david", "1234");
    callbacks[(int)RequestType::Delete]("david", "1234");

//    RequestType type;
//    if(RequestType::Login == type){
//        onLogin("david", "1234");
//    }
}