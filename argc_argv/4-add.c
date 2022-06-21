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

	if (ac < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)

		k = k + atoi(av[i]);
	printf("%d\n", k);
	return (0);
}
