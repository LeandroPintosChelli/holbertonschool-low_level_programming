#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 * It function that prints times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int az;
int i;

i = 0;
while (i < 10)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
i++;
_putchar('\n');
}
}
