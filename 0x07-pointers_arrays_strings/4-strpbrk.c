#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - The function
 * @s: The string
 * @accept: what to check with
 *
 * Description: searching for any set of bytes
 *
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char temp;

	for (s = *s; *s != '\0'; s++)
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
	}
	return ('\0');
}
