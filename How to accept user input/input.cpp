#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "What is your age?" << '\n';
    std::cin >> age;

    std::cout << "What is your name?" << '\n';
    std::getline(std::cin >> std::ws, name); //we need to use getline so if the person adds a space on the name like "Leo Tech" 
                                             //it doesnt skip the line and completely bugs the inputs.
                                             // the std::ws is so that if I move any cin above this code it doesnt bug the inputs

    std::cout << "Hello, " << name << "!" << '\n';
    std::cout << "You are " << age << " years old";
}