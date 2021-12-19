//
// Created by seongjin on 21. 12. 20..
//

#include "Subscript.h"

Vector::Vector(float x, float y, float z)
    : x(x), y(y), z(z){

}
float& Vector::operator[](int index) {
    if(index < 1){
        return x;
    }else if(index == 1){
        return y;
    }else{
        return z;
    }
}
const float& Vector::operator[](int index) const {
    if(index < 1){
        return x;
    }else if(index == 1){
        return y;
    }else{
        return z;
    }
}