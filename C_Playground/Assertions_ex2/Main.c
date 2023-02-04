/************************************************************************************************************************************************/
/* assert example 2																																*/
/*																																				*/
/* we use (<string>, <condition>) to display a text alongside the assertion:																	*/
/*		"Assertion failed: ("sqrt(x)", x >= 0.0), file C:\Users\rcami\source\repos\C_playground\C_Playground\Assertions_ex2\Main.c, line 16"	*/
/*																																				*/
/* the <string> returns true, the , acts as comma operator, after which the test follows														*/
/************************************************************************************************************************************************/

#include <stdio.h>
//	uncomment to disable assert()
// #define NDEBUG
#include <assert.h>
#include <math.h>

int main()
{
	double x = -1.0;
	assert(("sqrt(x)", x >= 0.0));		// raise assertion with custom message text "sqrt(x)"
	printf("sqrt(x) = %f\n", sqrt(x));

	// Returnvariable
	return (0);
}

