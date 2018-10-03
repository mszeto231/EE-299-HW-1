// EE299 
// HW 1, Question 2
// By Mitchell Szeto

/*
* Working with Variables and practice with the debugger
* 
* Breakpoint 0: anAnswer = 0;   anInt0 = 9; anInt1 = 8
* Breakpoint 1: anAnswer = 17;  anInt0 = 9; anInt1 = 8
* Breakpoint 2: anAnswer = 72;  anInt2 = 3
* Breakpoint 3: anAnswer = 75;  anInt2 = 3
* Breakpoint 4: anAnswer = 9;   anInt0 = 9; anInt1 = 8; anInt4 = 5
* Breakpoint 5: anAnswer = 22;  anInt0 = 9; anInt1 = 8; anInt4 = 5
*/

#include <stdio.h>
// a global variable
int anInt0 = 9;
int main(void)
{
	// some local variables
	int anInt1 = 8;
	int anInt2 = 3;
	int anInt3 = 1;
	int anInt4 = 5;
	int anAnswer = 0;
	// break point 0 inspect anAnswer,anInt0,anInt1
	anAnswer = anInt0 + anInt1;
	// break point 1 inspect anAnswer,anInt0,anInt1
	// print the answer followed by a new line \n
	printf("the answer is: %d\n", anAnswer);
	anAnswer = anInt0 * anInt1;
	// print the answer followed by a new line \n
	printf("the answer is: %d\n", anAnswer);
	// break point 2 inspect anAnswer,anInt2
	anAnswer = anAnswer + anInt2;
	// break point 3 inspect anAnswer,anInt2
	// print the answer followed by a new line \n
	printf("the answer is: %d\n", anAnswer);
	anAnswer = anInt1 + anInt3;
	// print the answer followed by a new line \n
	printf("the answer is: %d\n", anAnswer);
	// break point 4 anAnswer, inspect anInt0, anInt1, anInt4
	anAnswer = anInt0 + anInt1 + anInt4;
	// break point 5 inspect anAnswer, anInt0, anInt1, anInt4
	// print the answer followed by a new line \n
	printf("the answer is: %d\n", anAnswer);
	// print variables followed by a new line \n
	printf("the variables are: %d %d %d\n", anInt2, anInt3, anInt4);
	return 0;
}
