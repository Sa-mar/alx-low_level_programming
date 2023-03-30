#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncat - The function
 * @dest: dest string
 * @src: Source string
 * @n: the integer
 *
 * Description: A function that concat 2 strings
 *
 * Returns: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[len1 + 1] = src[i];
	}
	return (dest);
}
