//
// Created by vedan on 12/17/2024.
//

#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <memory> // For shared_ptr

#include "BankAccount.h"

class BankSystem {
private:
    std::vector<std::shared_ptr<BankAccount>> accounts;
    int nextAccountNumber;
public:
    // Constructor
    BankSystem();

    // Account management methods
    void createAccount(const std::string& name, double initialDeposit);
    std::shared_ptr<BankAccount> findAccount(int accountNumber);
    void depositToAccount();
    void withdrawFromAccount();
    void displayAccount();
    void displayAllAccounts();
};



#endif //BANKSYSTEM_H
