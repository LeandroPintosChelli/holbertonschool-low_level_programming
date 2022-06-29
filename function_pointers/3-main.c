#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* main - check code
* @argc: int
* @argv: char
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*(get_op_func(argv[2]))) && (strlen(argv[2]) == 1))
	{
	res = (*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
