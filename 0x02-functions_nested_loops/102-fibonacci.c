#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int count;
	long int n1 = 1;
	long int n2 = 2;
	long int tot;

	printf("%lu, ", n1);
	for (count = 2 ; count <= 50 ; count++)
	{
		if (count == 50)
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
