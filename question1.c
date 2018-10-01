// EE299 
// HW 1, Question 1
// By Mitchell Szeto

// This is a simple C program to compute the price of a trip to Europe this summer for me
// and 8 of my best friends.The cost per person is $977.50 each with a 5 % discount and a
// 9.5% sales tax.

#include <stdio.h>

int main(void)
{
	int people = 9;			// number of people on the trip
	float cost = 977.50;	// cost of trip per person
	float discount = 0.05;	// discount in the form of a percentage converted to a decimal
	float tax = 0.095;		// sales tax in the form of a percentage converted to a decimal

	float netCost = cost * (1 - discount) * (1 + tax);					// net cost of trip per person

	printf("The trip will cost $%.2f per person.\n", netCost);			// prints the cost per person to console
	printf("The total cost of the trip is $%.2f.\n", netCost * people);	// prints the total cost to console

	return 0;
}