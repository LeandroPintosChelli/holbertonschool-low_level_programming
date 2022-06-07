#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

for (x = '0'; x < '8'; x++)
{
	for (y = x + 1; y < '9'; y++)
{
	for (z = y + 1; z < '10'; z++)
{

putchar((x % 10) + '0');
putchar((y % 10) + '0');
putchar((z % 10) + '0');

if (x != '7' || y != '8' || z != '9')

putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}
