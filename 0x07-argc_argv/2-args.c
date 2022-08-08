#include <stdio.h>
/**
* main - print all arguments
* @ac: intenger
* @av: char
* Return: Always 0
*/
int main(int ac, char *av[])
{
	int i = 0;

	while (i < ac)
		printf("%s\n", av[i++]);

	return (0);
}
