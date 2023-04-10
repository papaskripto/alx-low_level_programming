#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * #letters: numbers of letters to be printed
 * Return: numbers of letters printed. If fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_text;
	ssize_t _read, _write;
	char *b;

	if (!filename)
		return (0);
	file_text = open(filename, O_RDONLY);

	if (file_text == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	_read = read(file_text, b, letters);
	_write = write(STDOUT_FILENO, b, _read);

	close(file_text);

	free(b);

	return (_write);
}
