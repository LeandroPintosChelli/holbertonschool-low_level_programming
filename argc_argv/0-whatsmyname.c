#include <stdio.h>
/**
* main - print a name
* @ac: intenger
* @av: char
* Return: Always 0
*/
int main(int ac, char *av[])
{
	if (ac > 0)
		printf("%s\n", av[0]);

	return (0);
}
