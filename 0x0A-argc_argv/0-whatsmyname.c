#include <stdio.h>
#include "main.h"

/**
 * main - do print the name of the program
 * @argc: as in number of arguments
 * @argv: as in array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
