3include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print fro 0 to 9 without repeat.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; numb2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (!(mum1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
