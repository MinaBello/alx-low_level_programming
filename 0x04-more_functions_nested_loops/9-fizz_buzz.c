#include <stdio.h>
/**
 * main - print from 1 to 100 .
 * print Fizz instead of multiplie by 3 .
 * print Buzz instead of multiplie by 5 .
 * Return: 0 on success.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0 && (a % 3) != 0 && a != 100)
		{
			printf("Buzz ");
		}
		else if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
