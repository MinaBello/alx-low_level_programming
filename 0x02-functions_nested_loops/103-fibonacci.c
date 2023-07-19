#include "main.h"
#include <stdio.h>
/**
 * main - fibonacci sequance .
 *
 * Return: 0 on success
 */
int main(void)
{
	int count;
	int n1 = 1;
	int n2 = 2;
	int tot = 0;

	while (n2 < 4000000)
	{
		if (n2 % 2 == 0)
		{
			tot += n2;
		}
		count = n2 + n1;
		n1 = n2;
		n2 = count;
	}
	printf("%d\n", tot);
	return (0);
}
