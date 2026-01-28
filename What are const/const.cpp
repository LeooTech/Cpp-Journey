#include <iostream>

int main(){
    const double PI = 3.14159;
    // PI = 420.69; // We cant change values that are constants, its a fixed value. Lightspeed or Monitor Resolution for example.
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << '\n';
    std::cout << "Your monitor resolution is " << WIDTH << "x" << HEIGHT;
}