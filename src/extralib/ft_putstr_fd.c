#include "../../include/libft.h"

void ft_putstr_fd(char *s, int fd)
{
    char temp;
    while (*s)
    {
        temp = *s++;
        write(fd, &temp, 1);
    }
}