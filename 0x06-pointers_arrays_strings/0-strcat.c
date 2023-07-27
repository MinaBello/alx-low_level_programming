#include "main.h"
/**
 * _strcat - appends to strings togather.
 * @dest: pointer type string.
 * @src: pointer tpye string.
 * Return: 0 on success
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while ((*(dest + l) != '\0'))
	{
		l++;
	}
	for (; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}

	return (dest);
}
