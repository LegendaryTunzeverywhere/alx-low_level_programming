#include <stdio.h>

/**
 * a - execute this function before main function
 */
void a(void) __attribute__ ((constructor));
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n);
}
