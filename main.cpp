#include <iostream>


int addNums(int firstNum, int secondNum) {
    return firstNum + secondNum;
}


int main(){
    
    int firstNum {12};
    int secondNum {99};

    std::cout << firstNum << std::endl;
    std::cout << secondNum << std::endl;
    std::cout << addNums(firstNum, secondNum) << std::endl;
    return 0;
}