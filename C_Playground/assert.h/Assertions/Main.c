/****************************************************/
/*	assertions working example  (<assert.h>)		*/
/*	void assert (int expression)					*/
/*		if expression == false then output assert   */
/*		message to stderr and call abort (end		*/
/*		program)									*/
/*													*/
/*	#define NDEBUG			disables assert macro	*/
/****************************************************/
//#define NDEBUG

#include <stdio.h>
#include <assert.h>

/**
 * \brief prints the value of an integer
 * \param myInt pointer to integer to print
 */
void print_number(int* myInt)
{
	assert(myInt != NULL);				// give assertion failure message if nullpointer
	printf("%d\n", *myInt);		// display number
}

int main()
{
	int a = 10;			// assign value
	int* b = NULL;		// create integer null-pointer
	int* c = NULL;		// create integer null-pointer

	b = &a;				// assign b the address of a (*b = 10)

	print_number(b);	// display 10
	print_number(c);	// display "Assertion failed: myInt != NULL, file C:\Users\rcami\source\repos\C_playground\C_Playground\Assertions\Main.c, line 21"

	return (0);
}

