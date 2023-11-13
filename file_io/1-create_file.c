#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return -1;

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        ssize_t bytes_written = write(fd, text_content, _strlen(text_content));
        if (bytes_written == -1)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

