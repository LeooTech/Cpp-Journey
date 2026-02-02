#include <iostream>

int main(){

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp < 30){
        std::cout << "The temperature is cold";
    }
    else{
        std::cout << "The temperature is way too hot";
    }

    return 0;
}