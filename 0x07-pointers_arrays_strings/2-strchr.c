#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strchr - The function
 * @s: the string
 * @c: the charcater
 *
 * Description: A function that locate a char
 *
 * Returns: Pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	return ('\0');
}
