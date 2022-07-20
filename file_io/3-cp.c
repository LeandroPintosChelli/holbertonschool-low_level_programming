#include "main.h"
/**
* _exit - print error and exit
* @error: num is either exit value
* @s: str is a name
* @fd: file descriptor
* Return: 0 if is success
*/
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_toUsage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE%s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE%s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", fd);
			exit(error);
	default:
	return (0);
	}
}
/**
* main - copies on file to another
* @argc: should be 3
* @argv: first is a file to copy
* Return: o success or 97-100 exit value errors
*/
int main(int argc, char *argv[])
{
	int o, j, r, w;
	char *buffer[1024];

	if (argc != 3)
		__exit(97);

	o = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (o == -1)
	__exit(99, argv[2], 0);

	j = open(argv[1], O_RDONLY);
	if (j == -1)
		__exit(98, argv[1], 0);

	while ((r = read(j, buffer, 1024)) != 0)
	{
		if (r == -1)
			__exit(98, argv[1], 0);

	w = write(o, buffer, r);
	if (w == -1)
		__exit(99, argv[2], 0);
	}

	close(o) == -1 ? (__exit(100, NULL, o)) : close(o);
	close(j) == -1 ? (__exit(100, NULL, j)) : close(j)
	return (0);
}
