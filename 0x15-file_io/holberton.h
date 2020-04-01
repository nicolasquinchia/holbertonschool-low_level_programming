#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* HOLBERTON_H */
