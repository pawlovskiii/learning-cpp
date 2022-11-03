#include <iostream>

int main(){
    
    // Compile Time Error
    std::cout << "Hello World!" << std::endl;

    // Run Time Error
    int value = 7/0;
    std::cout << "value :" << value << std::endl;

    return 0;
}