#include "main.h"
/**
 * _isdigit - check if the charachter is it digital from 0 to 9.
 * @c: integar input
 * Return: 1 if true and 0 if fulse
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
