// EE299 
// HW 1, Question 2
// By Mitchell Szeto

// The following C program is to be designed to ask the user how many friends will be
// traveling with them then will tell them how much the total bill will be.
//		a.Complete following program to compute and display the total bill based upon the
//		  number of travelers, the cost, and your code from problem 1.
//		b.Fully annotate the code.
//		c.Correct any poor coding or style practices.

#include <stdio.h>
int main(void)
{
	int travelers;
	float totalCost = 0.0f;

	float cost = 977.50;	// cost of trip per person
	float discount = 0.05;	// discount in the form of a percentage converted to a decimal
	float tax = 0.095;		// sales tax in the form of a percentage converted to a decimal

	float netCost = cost * (1 - discount) * (1 + tax);		// net cost of trip per person

	printf("how many people will be traveling: ");
	scanf("%d", &travelers);

	// YOUR CODE HERE TOO

	return 0;
}