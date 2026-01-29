#include <iostream>

int main(){
    char grade;

    std::cout << "What is your grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great! (A)";
            break;
        case 'B':
            std::cout << "You did good! (B)";
            break;
        case 'C':
            std::cout << "You did okay! (C)";
            break;
        case 'D':
            std::cout << "You did not do good! (D)";
            break;
        case 'F':
            std::cout << "You failed! (F)";
            break;
        default:
            std::cout << "Please only enter in letter grades! (A-F)";
            break;
    }
}