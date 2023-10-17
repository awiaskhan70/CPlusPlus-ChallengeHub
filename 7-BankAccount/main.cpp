#include "bankaccount.h"
#include <iostream>

int main() {
    BankAccount account1(1001, "Alice", 1000.0);
    BankAccount account2(1002, "Bob", 500.0);

    std::cout << "Account 1 Details:" << std::endl;
    std::cout << "Account Number: " << account1.getAccountNumber() << std::endl;
    std::cout << "Account Holder: " << account1.getAccountHolderName() << std::endl;
    std::cout << "Balance: $" << account1.getBalance() << std::endl;

    std::cout << "\nAccount 2 Details:" << std::endl;
    std::cout << "Account Number: " << account2.getAccountNumber() << std::endl;
    std::cout << "Account Holder: " << account2.getAccountHolderName() << std::endl;
    std::cout << "Balance: $" << account2.getBalance() << std::endl;

    account1.deposit(500.0);
    account1.withdraw(200.0);

    account2.deposit(100.0);
    account2.withdraw(800.0);

    std::cout << "\nUpdated Account 1 Details:" << std::endl;
    std::cout << "Balance: $" << account1.getBalance() << std::endl;

    std::cout << "\nUpdated Account 2 Details:" << std::endl;
    std::cout << "Balance: $" << account2.getBalance() << std::endl;

    return 0;
}
