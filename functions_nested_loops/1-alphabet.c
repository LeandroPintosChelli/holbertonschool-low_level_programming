#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);
	putchar('\n');
}
