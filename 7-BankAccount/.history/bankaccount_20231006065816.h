#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
int m_accountNumber;
std::string m_accountHolderName;
double m_balnace;

public:
    BankAccount(int accNumber , const std::string accHolder, double initialBalance);
    ~BankAccount();
};
#endif