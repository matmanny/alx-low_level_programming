#include "main.h"

/**
 * cp - copies src to desinations
 * @file_to: the destination file
 * @file_from: the source file
 *
 * Return: integer
 */
int cp(char *file_to, char *file_from)
{
	char *buffer[1024];
	int td, fd, fr, fw;
	int fc, ftc;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		return (98);

	td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (td < 0)
		return (99);

	fr = read(fd, buffer, 1024);
	if (fr < 0)
		return (98);

	while (fr > 0)
	{
		fw = write(td, buffer, fr);
		if (fw < 0)
			return (99);
		fr = read(fd, buffer, 1024);
		if (fr < 0)
			return (98);
	}


