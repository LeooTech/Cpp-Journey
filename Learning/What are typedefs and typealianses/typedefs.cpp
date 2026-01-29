#include <iostream>
#include <vector>

    /* typedef = reserved keyword used to create an additional name (alias) for another data type.
                 New identifier for an existing type
                 Helps with readability and reduces typos
    */
//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string; //does the same as typedef, but used more nowadays because its easier to comprehend
using number_t = int;
int main(){

    text_t firstName = "LeoTech"; // instead of std::string firstName = "LeoTech";
    number_t age = 16;
    std::cout << "Your name is " << firstName << " and you are " << age << "yr"; // instead of int age = "LeoTech";

    return 0;
}