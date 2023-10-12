#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - do print name using pointer to function
 * @name: do string to add
 * @f: as in pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
