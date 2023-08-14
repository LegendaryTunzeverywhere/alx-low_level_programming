#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the name of the file it was compiled from.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
