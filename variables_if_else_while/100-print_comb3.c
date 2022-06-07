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
int x, z;
{
for (x = '0'; x <= '9'; x++)
{
for (z = x + 1; z <= '9'; z++)
{
if (z != x)

putchar(x);
putchar(z);

if
(x == '8' && z == '9')

putchar(' ');
putchar(',');

}
}
}
putchar('\n');
return (0);
}
