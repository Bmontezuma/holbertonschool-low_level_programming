#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
int fd_from, fd_to, read_status, write_status, close_status;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

fd_from = open(argv[1], O_RDONLY);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (fd_from == -1 || fd_to == -1)
{
perror("Error");
return (99);
}

while ((read_status = read(fd_from, buffer, sizeof(buffer))) > 0 &&
 (write_status = write(fd_to, buffer, read_status)) == read_status);

if (read_status == -1)
{
perror("Error");
return (98);
}

close_status = close(fd_from) | close(fd_to);

if (close_status == -1)
{
perror("Error");
return (100);
}

return (0);
}

