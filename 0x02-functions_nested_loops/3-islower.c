#include "main.h"
/**
 * _islower - print 1 if the character is lowercase
 * and 0 if the charachter is Uppercase
 *
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
