#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: printing A-Z in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	while (a >= 'a' && a <= 'z')
	{
		putchar(a);
		putchar('\n');
		a++
	}
	return (0);
}
