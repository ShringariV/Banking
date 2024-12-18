#include <iostream>
#include "BankSystem.h"
int main() {
    BankSystem bank;
    int choice;
    std::string name;
    double initialDeposit;
    do {
        std::cout << "\n--- Banking System Menu ---\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Display Account Details\n";
        std::cout << "5. Display All Accounts\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice:  "
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter Account Holder Name: ";
            std::cin.ignore();
            getline(std::cin, name);
            std::cout << "Enter Initial Deposit: ";
            std::cin >> initialDeposit;

            if (initialDeposit < 0) {
                std::cout << "Initial deposit cannot be negative." << std::endl;
                break;
            }
            bank.createAccount(name, initialDeposit);
            break;
        case 2:
            bank.depositToAccount();
            break;
        case 3:
            bank.withdrawFromAccount();
            break;
        case 4:
            bank.displayAccount();
            break;
        case 5:
            bank.displayAllAccounts();
            break;
        case 6:
            std::cout << "Exiting... Thank you for using the banking system!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 6);

    return 0;
}