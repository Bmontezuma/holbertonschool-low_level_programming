#!/bin/bash

#!/bin/bash

# Compile all .c files in the current directory into .o files
for file in *.c
do
  if [ -f "$file" ]; then
    gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 "$file"
  fi
done

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up by removing the temporary .o files
rm -f *.o

