#include <iostream>

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

int main(){

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    return 0;
}