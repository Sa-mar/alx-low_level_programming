#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print alphabets in lower case skipping few
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	while (a <= 122)
	{
		if (a == 31)
		{
			continue;
		}
		else if (a == 101)
		{
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
