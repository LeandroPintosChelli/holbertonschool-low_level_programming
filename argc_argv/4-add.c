#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*
*
*
*
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
	{/**
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (isdigit(av[i][j]) == 0)
			{
				if (av[i][j] == '-' && av[i][j + 1] != '\0')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
*/	}
	for (i = 1; i < ac; i++)
		k = k + atoi(av[i]);
	printf("%d\n", k);
	return (0);
}
