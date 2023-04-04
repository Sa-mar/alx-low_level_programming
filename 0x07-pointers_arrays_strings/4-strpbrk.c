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
	int i;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
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
