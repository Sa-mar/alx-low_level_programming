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
	int a;

	while (a >= 97 && a <= 122)
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
