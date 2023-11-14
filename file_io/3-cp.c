#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int ac, char **av)

{
int f1, f2, r, w, c;

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

while ((r = read(f1, (char[1024]){0}, 1024)) > 0 &&
(w = write(f2, (char[1024]){0}, r)) == r);

c = close(f1) | close(f2);

if (c == -1)
{
perror("Error");
return (EXIT_FAILURE);
}

return (EXIT_SUCCESS);
}

