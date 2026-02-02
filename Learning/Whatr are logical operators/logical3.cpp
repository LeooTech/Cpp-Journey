#include <iostream>

int main(){

    int temp;
    bool sunny;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp < 30){
        std::cout << "The temperature is cold" << '\n';
    }
    else{
        std::cout << "The temperature is way too hot" << '\n';
    }


    if (!sunny){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }
    return 0;
}