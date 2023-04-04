#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn - The function
 * @s: string to check
 * @accept: string to compare with
 *
 * Description: a func to gets the leng of a prefix subs
 *
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len1, len2, status, lenght;

	lenght = 0;
	status = 0;

	for (len1 = 0; s[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; accept[len2] != '\0'; len2++)
	{
	}

	for (i = 0; i <= len1; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if (accept[j] == s[i])
			{
				status = 1;
				break;
			}
		}
		if (status == 1)
		{
			lenght++;
		}
		else
		{
			break;
		}
	}
	return (lenght);
}
