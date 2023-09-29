#include "main.h"

/**
 * factorial - do return the factorial of a number
 * @n: do number to return the factorial from
 *
 * Return:do factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
