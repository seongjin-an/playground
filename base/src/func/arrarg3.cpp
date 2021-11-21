//
// Created by seongjin on 21. 11. 21..
//

#include <iostream>
const int MAX = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(){
    double properties[MAX];

    int size = fill_array(properties, MAX);
    show_array(properties, size);
    if(size > 0){
        std::cout << "enter revaluation rate: ";
        double factor;
        while(!(std::cin >> factor)){
            std::cin.clear();
            while(std::cin.get() != '\n'){
                continue;
            }
            std::cout << "You entered it incorrectly. Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    std::cout << "quit";
    std::cin.get();
    std::cin.get();
    return 0;
}

int fill_array(double ar[], int limit){
    double temp;
    int i;
    for(i = 0; i < limit; i++){
        std::cout << (i + 1) << " times price: $";
        std::cin >> temp;
        if(!std::cin){
            std::cin.clear();
            while(std::cin.get() != '\n'){
                continue;
            }
            std::cout << "wrong! quit!\n";
            break;
        }else if(temp < 0){
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n){
    for(int i=0; i<n; i++){
        std::cout << (i + 1) << " times price: $";
        std::cout << ar[i] << std::endl;
    }
}

void revalue(double r, double ar[], int n){
    for(int i=0; i<n; i++){
        ar[i] *= r;
    }
}