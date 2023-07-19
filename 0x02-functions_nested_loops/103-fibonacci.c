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
	long int n1 = 1;
	long int n2 = 2;
	long int tot;

	printf("%lu, ", n1);
	for (count = 1 ; count < 10 ; count++)
	{
		if (count == 9)
		{
			printf("%lu\n", n2);
		}
		else
		{
			printf("%lu, ", n2);
		}
		tot = n1 + n2;
		n1 = n2;
		n2 = tot;
	}
	return (0);
}
