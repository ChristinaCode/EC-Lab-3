/*
Instructions from Canvas:
Derived class from the Account class.
Additional properties: overdraftlimit. 
Override the withdraw method to allow overdrafts up to the specified limit.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "currentaccount.h"

using namespace std;

CurrentAccount::CurrentAccount(const string& number, const string& person, double origValue, double overdraft) : Account(number, person, origValue), overdraftLim(overdraft) {}

void CurrentAccount::withdraw(double amount) {
    	if (amount > 0 && (balance - amount) >= -overdraftLim) {
        	balance -= amount;
    	} else {
        	cout << "Insufficient funds." << endl;
    	}
}

string CurrentAccount::getType() const {
    	return "Current";
}

double CurrentAccount::getOverdraftLimit() const {
    	return overdraftLim;
}