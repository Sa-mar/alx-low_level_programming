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
 * Return: Pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i, count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}

	for (i = 0; i <= count; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
