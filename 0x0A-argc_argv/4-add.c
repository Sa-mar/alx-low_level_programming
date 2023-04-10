#include <stdlib.h>
#include <stdio.h>

/**
 * main - ENtry Point
 * @argc: The number of command
 * @argv: The pointer
 *
 * Description: a program that prints all arguments it receives
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i] >= 48 && argv[i] <= 57)
		{
			sum = sum + atoi(rgv[i]));
		}
		else 
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d", sum);
	return (0);
}
