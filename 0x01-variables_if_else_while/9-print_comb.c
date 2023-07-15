#include <stdio.h>
/**
 * main - print from 0 to 9 .
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
