#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    int x = 0;

    std::cout << x;
    std::cout << first::x; //refering first namespace and the value of X on that particular namespace"first::x"
    std::cout << second::x; //refering second namespace and the value of X on that particular namespace"first::x"
    return 0;
}

int main2(){
    using namespace std; /*dont use it, not safe could get errors. But we can separate how the namespace works. 
                        using std::cout (will only apply for cout); or using std::string (will only apply for strings)*/
    int x = 0;

    cout << x;
    cout << first::x;
    cout << second::x;
    return 0;
}