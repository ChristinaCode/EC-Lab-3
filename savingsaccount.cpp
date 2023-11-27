/*
Instructions from Canvas:
Derived class from the Account class.
Additional properties: interestRate.  
Override the withdraw method to enforce a minimum balance.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "savingsaccount.h"

using namespace std;

SavingsAccount::SavingsAccount(const string& number, const string& person, double origValue, double rate) : Account(number, person, origValue), interest(rate) {}

void SavingsAccount::withdraw(double amount) {
	if (amount > 0 && (balance - amount) >= 100) {
        	balance -= amount;
    	} else {
        	cout << "Insufficient funds." << endl;
    	}
}

string SavingsAccount::getType() const {
    	return "Savings";
}

double SavingsAccount::getInterest() const {
    	return interest;
}