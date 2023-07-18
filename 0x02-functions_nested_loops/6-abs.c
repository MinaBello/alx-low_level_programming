#include "main.h"
/**
 * _abs - return the absolute value of an integar.
 * @i: integar to be tested
 * Return: 0 on success
 */
int _abs(int i)
{
	if (i == 0)
	{
		return (0);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
