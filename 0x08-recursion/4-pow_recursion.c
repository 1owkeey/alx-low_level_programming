#include "main.h"

/**
 * _pow_recursion -do return the value of x raised to the power of y
 * @x: do value to raise
 * @y:do power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
