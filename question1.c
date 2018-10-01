#include <stdio.h>

void main(void)
{
	int people = 9;
	float cost = 977.50;
	float discount = 0.05;
	float tax = 0.095;

	float sum = people * (cost * (1 - discount) * (1 + tax));
	printf("The total cost of the trip is $%.2f\n", sum);
}