#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
if (n != 100)
printf(" ");
printf("FizzBuzz");
}
{
if (n % 3 == 0)
printf("Fizz");
}
if (n % 5 == 0)
printf("Buzz");
else
printf("%d ", n);
}
printf("\n");
return (0);
}
