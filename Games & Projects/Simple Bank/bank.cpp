#include <iostream>

int main(){
    
    const int start_balance = 5400;
    char balance;

    std::cout << "Your current balance is: " << balance << "$";
    std::cout << "Choose what you would like to do next:" << '\n';
    std::cout << "[C]heck balance | [D]eposit money | [W]ithdraw money";

    switch(start_balance){
        case 'C':
            std::cout << "Your current balance is: " << balance << "$";
            break;
        case 'D':
            double deposit;
            balance = start_balance + deposit;
            std::cout << "You have successfuly added" << deposit << " to your balance!";
            std::cout << "Your current balance is " << balance << "$";
            break;
        case 'W':
            double withdraw;
            balance = start_balance - withdraw;
            std::cout << "You have successfully withdrawn " << withdraw << "$ from your balance!";
            std::cout << "Your current balance is " << balance << "$";
            break;
        default:
            std::cout << "Please only enter in the provided options!";
            break;
    }
}