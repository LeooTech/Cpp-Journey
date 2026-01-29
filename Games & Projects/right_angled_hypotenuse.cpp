#include <iostream>
#include <cmath>

int main(){
    
    double a;
    double b;

    std::cout << "Type the value of (A): ";
    std::cin >> a;
    std::cout << "Type the value of (B): ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Your right angled hypotenus is: " << c;

    return 0;
}