#include "main.h"
/**
 * _strlen - as in return the length of a string
 * @s: as in string
 * Return: as in length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
