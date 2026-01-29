#include <iostream>

int main(){
    
    const double start_balance = 5400;
    double balance;

    std::cout << "Your current balance is: " << balance << "$";
    std::cout << "Choose what you would like to do next:" << '\n';
    std::cout << "[C]heck balance | [D]eposit money | [W]ithdraw money";

    switch(balance){
        case 'C':
            std::cout << "Your current balance is: " << balance << "$";
            break;
        case 'D':
            std::cout << "You have successfuly added" << deposit << " to your balance!";
            std::cout << "Your current balance is " << 
            break;
        case 'W':
            double withdraw;
            balance = start_balance - withdraw;
            std::cout << 
    }
}