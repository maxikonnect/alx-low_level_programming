#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t nrd, nwr;
	char *maf;

	if (!filename)
		return (0);

	fr = open(filename, O_RDONLY);

	if (fr == -1)
		return (0);

	maf = malloc(sizeof(char) * (letters));
	if (!maf)
		return (0);

	nrd = read(fr, maf, letters);
	nwr = write(STDOUT_FILENO, maf, nrd);

	close(fr);

	free(maf);

	return (nwr);
}
