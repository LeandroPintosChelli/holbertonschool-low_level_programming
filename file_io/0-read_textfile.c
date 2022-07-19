#include "main.h"
/**
* read_textfile - read a text file
* @filename: const char
* @letters: poem
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1)

	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
