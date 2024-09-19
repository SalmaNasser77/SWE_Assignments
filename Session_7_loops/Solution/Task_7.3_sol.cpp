#include <iostream>

namespace SavingsAccount {
    double balance = 0.0;

    void createAccount(double initialBalance) {
        balance = initialBalance;
        std::cout << "Savings account created with balance: $" << balance << std::endl;
    }
    
    void addInterest(double rate) {
        balance += balance * rate / 100.0;
    }
    
    double getBalance() {
        return balance;
    }
}

namespace CheckingAccount {
    double balance = 0.0;

    void createAccount(double initialBalance) {
        balance = initialBalance;
        std::cout << "Checking account created with balance: $" << balance << std::endl;
    }
    
    void applyFee(double fee) {
        balance -= fee;
        if (balance < 0) {
            std::cerr << "Warning: Overdraft! Balance is negative: $" << balance << std::endl;
        }
    }
    
    double getBalance() {
        return balance;
    }
}

int main() {
    
    // Create and manage savings account
    SavingsAccount::createAccount(1000.00);
    std::cout << "Savings Account Balance: $" << SavingsAccount::getBalance() << std::endl;
    
    SavingsAccount::addInterest(5.0); // Add 5% interest
    std::cout << "Savings Account Balance after interest: $" << SavingsAccount::getBalance() << std::endl;
    
    // Create and manage checking account
    CheckingAccount::createAccount(500.00);
    std::cout << "Checking Account Balance: $" << CheckingAccount::getBalance() << std::endl;
    
    CheckingAccount::applyFee(25.00); // Apply a $25 fee
    std::cout << "Checking Account Balance after fee: $" << CheckingAccount::getBalance() << std::endl;
    
    return 0;
}
