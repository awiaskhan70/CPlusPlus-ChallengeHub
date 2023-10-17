#include "bankaccount.h"

BankAccount::BankAccount(int accNumber, const std::string accHolder, double initialBalance)
{
    m_accountNumber = accNumber;
    m_accountHolderName = accHolder;
    m_balnace = initialBalance;
}

BankAccount::~BankAccount()
{
}

int BankAccount::getAccountNumber() const
{
    return 0;
}

std::string BankAccount::getAccountHolderName() const
{
    return std::string();
}

double BankAccount::getBalance() const
{
    return 0.0;
}

void BankAccount::deposit(double ammount)
{
}

void BankAccount::withdraw(double ammount)
{
}
