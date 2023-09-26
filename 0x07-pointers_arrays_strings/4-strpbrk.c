#include "main.h"
/**
 * _strpbrk -do Entry point
 * @s: do input
 * @accept:do input
 * Return: do Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
