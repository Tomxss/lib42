#ifndef GET_NEXT_LINE_H /* Check whether it already exists, then include code*/
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int get_next_line(const int fd, char **line);

#endif