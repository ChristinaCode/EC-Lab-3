#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "account.h"

class CurrentAccount : public Account {
	private:
    		double overdraftLim;

	public:
    		CurrentAccount(const string& number, const string& person, double origValue, double overdraft);
    		void withdraw(double amount) override;
    		string getType() const override;
    		double getOverdraftLimit() const;
};

#endif