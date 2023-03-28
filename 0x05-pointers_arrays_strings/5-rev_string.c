#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - The function
 * @s: The string pointer
 *
 * Description: A function that reverses a string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int st;
	int count;
	int tmpstr;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (st = count - 1; st >= count / 2; st--)
	{
		tmpstr = s[st];
		s[st] = s[count - st - 1];
		s[count - st - 1] = tmpstr;
	}
}
