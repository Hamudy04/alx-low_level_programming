#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *memory;
	ssize_t letters_read;
	ssize_t letters_written;

	if (!filename)
		return (0);
	if (fd == -1)
		return (0);

	memory = malloc(letters);

	if (memory == NULL)
	{
		close(fd);
		return (0);
	}
	letters_read = read(fd, memory, letters);

	if (letters_read == -1)
	{
		free(memory);
		close(fd);
		return (0);
	}
	letters_written = write(STDOUT_FILENO, memory, letters_read);
	if (letters_written == -1 || letters_read != letters_written)
	{
		free(memory);
		close(fd);
		return (0);
	}
	free(memory);
	close(fd);
	return (letters_written);
}
