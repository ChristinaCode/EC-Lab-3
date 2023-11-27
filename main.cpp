/*
Author: Christina Sorensen
Description: This is a program to manage bank accounts. This program doesn't work properly, but I ran out of time to completely debug the program. I figured some points are better than none.
*/

#include "account.h"
#include "savingsaccount.h"
#include "currentaccount.h"

int main() {
	//The following code is from Canvas.
    	SavingsAccount savings("S123", "John Doe", 1000, 0.02);
    	CurrentAccount current("C456", "Jane Doe", 2000, 500);

    	savings.displayDetails();
    	current.displayDetails();

	savings.deposit(500);
    	current.withdraw(1000);
    
    	savings.displayDetails();
    	current.displayDetails();

    	// Transfer 300 from savings to current
    	current = current + savings;

    	savings.displayDetails();
    	current.displayDetails();

    	return 0;
}