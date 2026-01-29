#include <iostream>

int main(){
    double a, b;
    double res;
    char op;

    std::cout << "Choose one number: ";
    std::cin >> a;

    std::cout << "Choose another number: ";
    std::cin >> b;

    std::cout << "Choose a operation(+, -, *, /):  ";
    std::cin >> op;

    switch(op){
        case '+':
            res = a + b;
            std::cout << "Your equation equals to: " << res;
            break;
        case '-':
            res = a - b;
            std::cout << "Your equation equals to: " << res;
            break;
        case '*':
            res = a * b;
            std::cout << "Your equation equals to: " << res;
            break;
        case '/':
            res = a / b;
            std::cout << "Your equation equals to: " << res;
            break;
        default:
            std::cout << "Please choose a valid equation!" << '\n';
            std::cout << "(+, -, *, /)";
            break;
    }
}