#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - The function
 * @a: the string
 *
 * Description: A function that convert 4rm l to u
 *
 * Return: the upper
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
