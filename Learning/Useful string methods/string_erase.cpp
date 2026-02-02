#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.erase(0, 2);
    
    std::cout << name;

    return 0;
}