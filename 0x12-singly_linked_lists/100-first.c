#include <stdio.h>

/**
 * before_main_executes - execute this function before main function
 */
void __attribute__ ((constructor)) before_main_executes()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n);
}
