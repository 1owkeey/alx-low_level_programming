#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - do print a sentence before the main
 * as in function is executed
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}
