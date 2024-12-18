//
// Created by vedan on 12/17/2024.
//

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
#include <vector>


class BankAccount {
private:
    int accountNumber;
    std::string accountHolder;
    double balance;
public:
    // Constructor
    BankAccount(int accNo, const std::string& name, double initialBalance);

    // Getters and setters
    int getAccountNumber() const;
    std::string getAccountHolder() const;
    double getBalance() const;

    // Account operations
    void deposit(double amount);
    bool withdraw(double amount);
    void displayDetails() const;
};



#endif //BANKACCOUNT_H
