#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a"); /* open the file in append mode*/

	if (fp == NULL)
	{
		return (-1); /* failed to open file */
	}

	if (text_content != NULL)
	{
	int len = strlen(text_content);

	fwrite(text_content, sizeof(char), len, fp); /* write */
	}
	fclose(fp); /* close the file*/
	return (1);
}

