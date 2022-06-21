#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - program that adds positive numbers
* @ac: int
* @av: char
* Return: Always 0
*/
int main(int ac, char *av[])
{
	int i, k = 0;
	int j;

	if (ac < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i]; j++)
		{
			if (isdigit(av[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		k = k + atoi(av[i]);
	}
	printf("%d\n", k);
	return (0);
}
