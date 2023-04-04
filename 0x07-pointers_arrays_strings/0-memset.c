#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *memset - The function
 * @s: The buffer
 * @b: The character
 * @n: the number of bytes
 *
 * Description: function thaat fills memory with cons bytes
 *
 * Return: Always s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
