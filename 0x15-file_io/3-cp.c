#include "main.h"

/**
 * err_f - checks file status
 * @srce: file to check from
 * @destn: destination file
 * @argv: argument vector
 */

void err_f(int srce, int destn, char *argv[])
{
	if (srce == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies content of a file to another
 * and exits if file descriptor can not be closed
 * @argc: counts the number of arguments
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int srce, destn, errc;
	ssize_t nuchr = 1024, nrw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp srce destn");
		exit(97);
	}

	srce = open(argv[1], O_RDONLY);
	destn = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_f(srce, destn, argv);

	while (nuchr == 1024)
	{
		nuchr = read(srce, buf, 1024);
		if (nuchr == -1)
			err_f(-1, 0, argv);
		nrw = write(destn, buf, nuchr);
		if (nrw == -1)
			err_f(0, -1, argv);
	}

	errc = close(srce);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clode fd %d\n", srce);
		exit(100);
	}

	errc = close(destn);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srce);
		exit(100);
	}
	return (0);
}
