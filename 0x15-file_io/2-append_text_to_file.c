#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to add at the string
 * Return: 1 on succes, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fldec, nlt, rw;

	if (filename == NULL)
		return (-1);

	fldec = open(filename, O_WRONLY | O_APPEND);

	if (fldec == -1)
		return (-1);

	if (text_content)
	{
		for (nlt = 0; text_content[nlt]; nlt++)
			;

		rw = write(fldec, text_content, nlt);

		if (rw == -1)
			return (-1);
	}
	close(fldec);
	return (1);
}
