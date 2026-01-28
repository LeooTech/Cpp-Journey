#include <iostream>

/* type conversion = conversion a value of one data type to another
                     Implicit = automatic
                     Explicit = Precede value with new data type (int)
*/
int main(){

    double x = (int) 3.14;
    char y = 100; //it gives the letter D on the output because thats the HEX value of 100, we chose char type so it should give us a character

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100; //Because we are using integer division, so we wont get decimal portion, thats why we add the (double)

    std::cout << score << "%" << '\n';
    std::cout << y << '\n';
    std::cout << x;

    return 0;
}