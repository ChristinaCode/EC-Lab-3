#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount : public Account {
	private:
    		double interest;

	public:
    		SavingsAccount(const string& number, const string& person, double origValue, double rate);
    		void withdraw(double amount) override;
    		string getType() const override;
    		double getInterest() const;
};

#endif