#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - The function
 * @dest: destination pointer
 * @src: source pointer
 *
 * Description: a function to copy string 4rm src 2 dest
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
