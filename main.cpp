#include <iostream>

int main(){

    int age;
    std::string full_name;

    std::cout << "Type your full name: " << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Type your age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;

    return 0;   
}