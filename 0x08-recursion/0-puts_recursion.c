#include "main.h"
/**
 * _puts_recursion - do function like puts();
 * @s: do input
 * Return:do always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
