#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: The initial segment
 * @accept: the only bytes
 *
 * Description: function that gets lengh of a prefix
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				++b;
				break;
			}
			if (accept[a + 1] == '\0')
			{
				break;
			}
		}
		a++;
	}
	return (a);
}
