#include "main.h"

/**
 * *_memcpy - copy n number of memory to another memory.
 * @dest: array where we will copy.
 * @src: array which we will copy.
 * @n: Number of characters will be copied.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	for (; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
