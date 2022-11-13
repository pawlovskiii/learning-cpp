#include <iostream>

int main(){

    int scores[10];

    for (int i{0}; i < 10; i++) {
        scores[i] = i * i;
    }

    for (int i{0}; i < 10; i++) {
        std::cout << scores[i] << std::endl; 
    }

    return 0;   
}