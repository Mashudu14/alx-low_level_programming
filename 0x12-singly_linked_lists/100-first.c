#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - Print a line before main
 * fuction is executed
 */
void first(void)
{
printf("You're beat! and yet, you must allow, \n");
printf("bore my house upon my back!\n");
}
