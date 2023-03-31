#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *cap_string - The function
 * @a: The string
 *
 * Description: A function that capitalize
 * words of a string
 *
 * Return: the string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
			}
		}
		else if (a[i - 1] == ' ' ||
				a[i - 1] == '\t' ||
				a[i - 1] == '\n' ||
				a[i - 1] == ',' ||
				a[i - 1] == ';' ||
				a[i - 1] == '.' ||
				a[i - 1] == '!' ||
				a[i - 1] == '?' ||
				a[i - 1] == '"' ||
				a[i - 1] == '(' ||
				a[i - 1] == ')' ||
				a[i - 1] == '{' ||
				a[i - 1] == '}')
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
