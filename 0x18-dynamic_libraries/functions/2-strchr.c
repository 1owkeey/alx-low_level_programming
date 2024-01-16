#include "main.h"
/**
 * _strchr -as in Entry point
 * @s: as in input
 * @c: as in input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
