#include "main.h"
/**
 * _strncat - append two string.
 * @dest: pointer type string.
 * @src: pointer type string.
 * @n: input type integar.
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	if (n <= 0)
	{
		return (dest);
	}
	while ((*(dest + i) != '\0'))
	{
		i++;
	}
	while (l < n && src[l] != '\0')
	{
		dest[i++] = src[l++];
	}
	dest[i++] = '\0';
	return (dest);
}
