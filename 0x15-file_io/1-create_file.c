#include "main.h"
#include <stdio.h>


/**
 * create_file - Function that creates a file and fills it with stuff
 * @filename: Name of the file to be created
 * @text_content: Text to be filled into filename
 * Return: 1 if success, -1 if failure
 */



int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
