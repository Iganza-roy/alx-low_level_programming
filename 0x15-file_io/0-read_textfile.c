#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t mvk, kld;
	int bv;
	char *pr;

	if (!filename)
		return (0);

	bv = open(filename, O_RDONLY);

	if (bv == -1)
		return (0);

	pr = malloc(sizeof(char) * (letters));
	if (!pr)
		return (0);

	mvk = read(bv, pr, letters);
	kld = write(STDOUT_FILENO, pr, mvk);

	close(bv);
	free(pr);

	return (kld);

}
