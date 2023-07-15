#include <stdio.h>
/**
 * main - print comination from 012 to 789 .
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0' ; a < '8' ; a++)
	{
		for (b = a + 1 ; b < '9' ; b++)
		{
			for (c = b + 1 ; c <= '9' ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
