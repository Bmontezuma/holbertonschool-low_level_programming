#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "main.h"

int main(int ac, char **av)
{
int f1, f2, r, w, c;
char buffer[1024] = {0};

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", *av);
return (EXIT_FAILURE);
}

f1 = open(av[1], O_RDONLY);
f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

if (ac != 3 || f1 == -1 || f2 == -1)
{
perror("Error");
return (EXIT_FAILURE);
}

while ((r = read(f1, buffer, 1024)) > 0 &&
(w = write(f2, buffer, r)) == r);

c = close(f1) | close(f2);

if (c == -1)
{
perror("Error");
return (EXIT_FAILURE);
}

return (EXIT_SUCCESS);
}

