#include <iostream>

// && = check if two conditions are true
// || = check if at least one of two conditions is true
// ! = reverses the logical state of its operand


int main(){

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp >= 0 && temp <= 14){
        std::cout << "The temperature is cold";
    }
    else if (temp >= 15 && temp <= 30)
    {
        std::cout << "The temperature is good";
    }
    else{
        std::cout << "The temperature is way too hot";
    }

    return 0;
}