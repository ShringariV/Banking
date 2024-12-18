//
// Created by vedan on 12/17/2024.
//

#include "BankAccount.h"

#include <iomanip>

BankAccount::BankAccount(int accNo, const std::string& name, double initialBalance)
{
    accountNumber = accNo;
    accountHolder = name;
    balance = initialBalance;
}

std::string BankAccount::getAccountHolder() const
{
    return accountHolder;
}

double BankAccount::getBalance() const
{
    return balance;
}

int BankAccount::getAccountNumber() const
{
    return accountNumber;
}

void BankAccount::displayDetails() const
{
    std::cout << "Account Number: " << getAccountNumber() << std::endl;
    std::cout << "Account Holder: " << getAccountHolder() << std::endl;
    std::cout << "Balance: $" << std::fixed << std::setprecision(2) << getBalance() << std::endl;
}

void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
        std::cout << "Deposit successful! New balance is: $" << std::fixed << std::setprecision(2) << getBalance() << std::endl;
    }
    else
    {
        std::cout << "Invalid deposit!" << std::endl;
    }
}

bool BankAccount::withdraw(double amount)
{
    if (amount <= 0)
    {
        std::cout << "Invalid withdrawal amount!" << std::endl;
        return false;
    }
    if (amount > balance)
    {
        std::cout << "Insufficient balance!" << std::endl;
        return false;
    }
    balance = balance - amount;
    std::cout << "Withdrawal successful! New balance: $" << std::fixed << std::setprecision(2) << getBalance() << std::endl;
    return true;
}





