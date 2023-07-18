#include "main.h"
/**
 * _isalpha - check the input if if letter or no
 * if letter lower or uppercase print 1 otherwise print 0 .
 * @c: char type letter
 * Return: 0 in succes.
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 65 && c < 90))
	{
		return (1);
	}
	else
		return (0);
}
