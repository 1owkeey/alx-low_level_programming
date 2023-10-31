#include "main.h"

/**
 * create_file - the program creates a file
 * @filename: the filename
 * @text_content: the content written in the file
 *
 * Return: 1 if successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
    int file_d;
    int nletters;
    ssize_t rwr;

    if (!filename)
        return (-1);

    file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_d == -1)
        return (-1);

    if (!text_content)
        text_content = "";

    for (nletters = 0; text_content[nletters]; nletters++)
    {
        rwr = write(file_d, text_content + nletters, 1);
        if (rwr != 1)
        {
            close(file_d);
            return (-1);
        }
    }

    close(file_d);
    return (1);
}
