#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: string
 * @c: character
 *
 * Description: function that locates charcter in a string
 *
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] >= '\0')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	return ('\0');
}
