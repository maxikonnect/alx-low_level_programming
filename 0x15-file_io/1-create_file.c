#include "main.h"

/**
 * create_file - creates  file
 * @filename: The name of file.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fr;
	int pletters;
	int rwr;

	if (!filename)
		return (-1);

	fr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (pletters = 0; text_content[pletters]; pletters++)
		;

	rwr = write(fr, text_content, pletters);

	if (rwr == -1)
		return (-1);

	close(fr);

	return (1);
}
