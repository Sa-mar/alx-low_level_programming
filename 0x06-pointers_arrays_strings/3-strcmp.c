#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - The function
 * @s1: First string
 * @s2: Second string
 *
 * Description: Function that compares string
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, stat;

	stat = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			stat = 1;
			break;
		}
	}
	if (stat == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
