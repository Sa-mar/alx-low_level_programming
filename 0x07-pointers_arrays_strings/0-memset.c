#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _memset - Entry Point
 * @s: Pointer to memory
 * @b: constant value
 * @n: integer value
 *
 * Description: Fills memory with a constant byte
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; ++a)
	{
		s[a] = b;
	}
	return (s);
}
