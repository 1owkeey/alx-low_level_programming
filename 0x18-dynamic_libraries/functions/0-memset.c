#include "main.h"
/**
 * _memset - do fill a block of memory with a specific value
 * @s: as in starting address of memory to be filled
 * @b: do the desired value
 * @n: as in number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
