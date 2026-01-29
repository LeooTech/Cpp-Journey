#include <iostream>

/*if statements = do something if a condition is true.
                  if not, then dont do it.  */

int main(){

    int age;

    std::cout << "Type your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are way to old to join this website! ";
    }
    else if (age >= 18){
        std::cout << "Welcome to the site! ";
    }
    else{
        std::cout << "You are not allowed to join! ";
    }

    return 0;
}