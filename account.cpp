/*
Instructions for this class in Canvas:
Base class for all types of bank accounts.3ed
Properties: accountNumber, accountHolder, balance.
Methods:
displayDetails(): Display account details.
deposit(amount): Deposit money into the account.
withdraw(amount): Withdraw money from the account (ensure sufficient balance).
*/

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

using namespace std;

class Account {
	Account::Account(const string& number, const string& person, double origValue) : accountNum(number), accountOwner(person), balance(origValue) {}

	void displayDetails() const {
    		cout << "Account Details for " << this->getType() << "Savings Account (ID: " << this->accountNum << "):" << endl;
    		cout << "    Holder: " << this->accountOwner << endl;
    		cout << "    Balance: $" << fixed << setprecision(2) << this->balance << endl;
	}

	void deposit(double amount) {
		if (amount > 0) {
			account.balance += amount;
		}
	}

	void Account::withdraw(double amount) {
    		if (amount > 0 && this->balance >= amount) {
        		this->balance -= amount;
    		} else {
        		cout << "Insufficient funds." << endl;
    		}
	}

	virtual string getType() const {
		return "Generic";
	}

	double getBalance() const {
    		return this->balance;
	}

	string getAccountNumber() const {
		return accountNum;
	}

	friend ostream& operator << (ostream& os, const Account& account);

	ostream& operator << (ostream& os, const Account& account) {
		os << "Account Details for " << account.getType() << "Savings Account (ID: " << account.accountNum << "):" << endl;
		os << "	Holder: " << account.accountOwner << endl;
		os << "	Balance: $" << fixed << setprecision(2) << account.balance << endl;
		return os;
}