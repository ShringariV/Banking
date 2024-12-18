//
// Created by vedan on 12/17/2024.
//

#include "BankSystem.h"

BankSystem::BankSystem()
{
    nextAccountNumber = 1000;
}

void BankSystem::createAccount(const std::string& name, double initialDeposit)
{
    auto newAccount = std::make_shared<BankAccount>(nextAccountNumber++, name, initialDeposit);
    accounts.push_back(newAccount);
    std::cout << "Account successfully created! Account number: " << newAccount->getAccountNumber() << std::endl;
}

std::shared_ptr<BankAccount> BankSystem::findAccount(int accountNumber)
{
    for(auto &acc : accounts)
    {
        if(acc->getAccountNumber() == accountNumber)
        {
            return acc;
        }
    }
    return nullptr;
}

void BankSystem::depositToAccount()
{
    int accNum;
    double amt;
    std::cout << "Enter account number: ";
    std::cin >> accNum;
    auto account = findAccount(accNum);
    if(account)
    {
        std::cout << "Enter deposit amount: ";
        std::cin >> amt;
        account->deposit(amt);
    }
    else
    {
        std::cout << "Account not found!" << std::endl;
    }
}

void BankSystem::withdrawFromAccount()
{
    int accNum;
    double amt;
    std::cout << "Enter account number: ";
    std::cin >> accNum;
    auto account = findAccount(accNum);
    if(account)
    {
        std::cout << "Enter withdrawal amount: ";
        std::cin >> amt;
        account->withdraw(amt);
    }
    else
    {
        std::cout << "Account not found!" << std::endl;
    }
}

void BankSystem::displayAccount()
{
    int accNum;
    double amt;
    std::cout << "Enter account number: ";
    std::cin >> accNum;
    auto account = findAccount(accNum);
    if(account)
    {
        account->displayDetails();
    }
    else
    {
        std::cout << "Account not found!" << std::endl;
    }
}

void BankSystem::displayAllAccounts()
{
    std::cout << "\n--- All Bank Accounts ---\n";
    for (const auto &account : accounts)
    {
        account->displayDetails();
        std::cout << "-----------------------------" << std::endl;
    }
    if(accounts.empty())
    {
        std::cout << "No available accounts!" << std::endl;
    }
}




