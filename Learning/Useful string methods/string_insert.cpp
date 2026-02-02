#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.insert(1, "@");

    std::cout << "Welcome, " << name

    return 0;
}