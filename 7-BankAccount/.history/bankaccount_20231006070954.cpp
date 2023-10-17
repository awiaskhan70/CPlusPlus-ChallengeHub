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
    return m_accountNumber;
}

std::string BankAccount::getAccountHolderName() const
{
    return std::string(m_accountHolderName);
}

double BankAccount::getBalance() const
{
    return m_balnace;
}

void BankAccount::deposit(double ammount)
{
}

void BankAccount::withdraw(double ammount)
{
}
