#include "main.h"

/**
 *  read_textfile - a function that reads a text file and prints it to the
 *  POSIX standard output.
 *
 *  @filename: this is name of the file to read.
 *  @letters: number of letters to be read and printed.
 *  Return: letters it could read and print or 0 if operation fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, retVal, wrtVal;
	char *buff = malloc(letters * sizeof(char));

	if (filename == NULL || buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}

	retVal = read(fd, buff, letters);
	if (retVal < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	buff[retVal] = '\0';
	close(fd);

	wrtVal = write(STDOUT_FILENO, buff, retVal);
	if (wrtVal < 0 || wrtVal != retVal)
		return (0);

	close(fd);
	free(buff);
	return (wrtVal);
}
