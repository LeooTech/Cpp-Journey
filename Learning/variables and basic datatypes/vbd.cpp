#include <iostream>

int main(){
    
    //sum
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << sum << '\n';


    //integer (whole number)
    int age = 16;
    int year = 2026;
    int days = 28.3;
    std::cout << days << '\n';


    //double (number including decimal)
    double price = 9.99;
    double mark = 18.5;
    double temp = 25.1;
    std::cout << "The price of that product is " << price << '\n';
    std::cout << "On your last exam you had " << mark << '\n';
    std::cout << "Outside its " << temp << " Celsius" << '\n';


    //single character
    char grade = 'A';
    char initial = 'L';
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)
    std::string name = "LeoTech" ;
    std::string day = "Wednesday";
    std::string food = "strognoff";
    std::string address = "123 Cpp St.";
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;

}