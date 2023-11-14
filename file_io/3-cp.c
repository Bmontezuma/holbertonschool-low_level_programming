#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
int fd_from, fd_to, read_status, write_status, close_status;
char buffer[1024];
const char *file_from = "test_folder/textfile_0";
const char *file_to = "test_folder/textfile_0_copy_3";

fd_from = open(file_from, O_RDONLY);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (fd_from == -1 || fd_to == -1)
{
perror("Error");
return (1);
}

while ((read_status = read(fd_from, buffer, sizeof(buffer))) > 0 &&
(write_status = write(fd_to, buffer, read_status)) == read_status);

close_status = close(fd_from) | close(fd_to);

if (close_status == -1)
{
perror("Error");
return (1);
}

return (0);
}

