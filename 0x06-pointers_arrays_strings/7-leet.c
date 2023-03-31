#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *leet - The function
 * @a: The string
 *
 * Description: encodes strings into 1337 - leet
 *
 * Return: leet
 */
char *leet(char *a)
{
	int c, d;
	char s1[], s2[];

	s1[] = "aAeEoOtTlL";
	s2[] = "4433007711";
	for (c = 0; a[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d ++)
		{
			if (c[a] == s1[d])
			{
				a[c] = s2[d];
			}
		}
	}
	return (a);
}
