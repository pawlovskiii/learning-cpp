#include <iostream>

int main(){


    char message [] {'H', 'e', 'y'};

    for (char c : message) {
        std::cout << c << std::endl;
    }

    int nums [] {1, 2, 3, 4, 5};

    for (auto i : nums) {
        std::cout << i << std::endl;
    }


    return 0;   
}