#include <stdio.h>
/**
 * main - print a compination from 4 digits
 * from 00 01 to 98 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 0;
	int b;

	for (a = 0 ; a <= 98 ; a++)
	{
		for (b = a + 1 ; b <= 99 ; b++)
		{
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 % 10 + '0');
			putchar(b % 10 + '0');
			if (a == 98 && b == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
