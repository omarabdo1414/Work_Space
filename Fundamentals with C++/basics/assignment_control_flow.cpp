#include <iostream>
using namespace std;

int main() {
    double balance = 0;

    while (true) {
        cout << "\nBanking System Menu:\n";
        cout << "1. Account Creation\n";
        cout << "2. Account Balance Inquiry\n";
        cout << "3. Withdrawal\n";
        cout << "4. Deposit\n";
        cout << "5. Interest Calculation\n";
        cout << "6. Exit\n";

        int choice;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Account Creation
                string name;
                double initialDeposit;
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter your initial deposit: $";
                cin >> initialDeposit;

                if (initialDeposit < 100) {
                    cout << "Initial deposit must be at least $100.\n";
                } else {
                    cout << "Account for " << name << " created successfully.\n";
                }
                break;
            }

            case 2:
                // Account Balance Inquiry
                cout << "Your account balance is: $" << balance << endl;
                break;

            case 3: {
                // Withdrawal
                double withdrawalAmount;
                cout << "Enter withdrawal amount: $";
                cin >> withdrawalAmount;

                if (withdrawalAmount > balance) {
                    cout << "Insufficient funds.\n";
                } else {
                    balance -= withdrawalAmount;
                    cout << "Withdrawal of $" << withdrawalAmount << " successful. Your new balance is: $" << balance << endl;
                }
                break;
            }

            case 4: {
                // Deposit
                double depositAmount;
                cout << "Enter deposit amount: $";
                cin >> depositAmount;

                if (depositAmount < 50) {
                    cout << "Deposit must be at least $50.\n";
                } else {
                    balance += depositAmount;
                    cout << "Deposit of $" << depositAmount << " successful. Your new balance is: $" << balance << endl;
                }
                break;
            }

            case 5: {
                // Interest Calculation (using a simple for loop for one year)
                for (int i = 0; i < 12; ++i) {
                    balance += balance * 0.05; // 5% interest
                }
                cout << "Account balance after one year of 5% interest: $" << balance << endl;
                break;
            }

            case 6:
                // Exit
                cout << "Exiting the program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
                break;
        }
    }

    return 0;
}
