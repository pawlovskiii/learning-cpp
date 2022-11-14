#include <iostream>

int main(){

    int* p_num{nullptr};
    p_num = new int;

    *p_num = 45;


    std::cout << *p_num << std::endl;


    return 0;   
}