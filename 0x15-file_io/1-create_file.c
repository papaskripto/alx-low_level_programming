#include "main.h"

/**
 * create_file - create a file
 * @filename: filename described
 * @text_content: content written in the file
 *
 * Return: 1 if it success else -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int number_of_letters;
	int read_write;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (number_of_letters = 0; text_content[number_of_letters]; number_of_letters++)
		;


	read_write = write(file_descriptor, text_content, number_of_letters);

	if (read_write == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
