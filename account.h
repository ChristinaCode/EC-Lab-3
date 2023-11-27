#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Account {
	protected:
		string accountNum;
		string accountOwner;
	public:
		Account(const string& number, const string& person, double origValue);
		void displayDetails() const;
		void deposit(double amount);
		virtual void withdraw(double amount);
		virtual string getType() const;
		friend ostream& operator << (ostream& os, const Account& account);
		virtual Account& operator+(const Account& other);
};

#endif