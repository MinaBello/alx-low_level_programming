#include "main.h"
/**
 * _isupper - check if the charachter is Uppercase
 * @c: integar input
 * Return: 1 if true and 0 if fulse
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
