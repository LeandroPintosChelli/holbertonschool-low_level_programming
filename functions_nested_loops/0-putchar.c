#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * It prints the word Holberton, followed by a new line.
 * Return:  Always 0
 */
int main(void)
{
char word[8] = "_putchar";
int x;

for (x = 0; x < 8; x++)
	putchar(word[x]);
	putchar('\n');
	return (0);
}
