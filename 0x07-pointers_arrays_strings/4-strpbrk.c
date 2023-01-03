#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry Point
 * @s: string
 * @accept: to match
 *
 * Description: a function to search string
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		while (accept[a])
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
