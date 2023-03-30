#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - the function
 * @dest: Dest string
 * @src: source string
 * @n: the int
 *
 * Description: a function that copies string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
