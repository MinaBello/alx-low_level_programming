#include <stdio.h>
/**
 * main - print from 0 to 9 .
 *
 * Return:0 on success
 */
int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
