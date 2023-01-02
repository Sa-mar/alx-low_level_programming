#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _memcpy - Entry Point
 * @dest: memory area
 * @src: memory area
 * @n: integer
 *
 * Description: a function that copies to memory area
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; ++a)
	{
		dest[a] = src[a];
	}
	return (dest);
}
