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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (*s + 1);
		}
		s++;
	}
	return ('\0');
}
