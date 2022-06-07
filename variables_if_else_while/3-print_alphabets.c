#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char az;
	char AZ;

	for (az = 'a'; az <= 'z'; az++)
	putchar(az);
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	putchar(AZ);
	putchar('\n');
	return (0);
}
