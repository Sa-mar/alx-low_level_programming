#include <stlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - The function
 * @dest: Destination address
 * @src: source address
 * @n: The number of times/bytes
 *
 * Description: A function that copies memoery area
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
