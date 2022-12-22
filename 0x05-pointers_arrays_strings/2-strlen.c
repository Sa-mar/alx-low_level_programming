#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _strlen - ENtry Point
 * @x: the string
 *
 * Description: Function that returns str length
 *
 * Return: The length
 */
int _strlen(char *x)
{
	int y = 0;

	while (x[y] != '\0')
	{
		y++;
	}
	/*https://www.programmingsimplified.com/c-program-find-string-length*/
	return (y);
}
