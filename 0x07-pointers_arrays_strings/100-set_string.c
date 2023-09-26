#include "main.h"

/**
 * set_string -do sets the value of a pointer to a char
 * @s: always pointer to pointer
 * @to: always pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
