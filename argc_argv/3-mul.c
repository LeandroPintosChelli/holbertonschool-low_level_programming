#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplicate
* @ac: int
* @av: char
* Return: Always 0
*/
int main(int ac, char *av[])
{
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
