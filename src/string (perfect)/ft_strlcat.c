/*Library: The strlcat() function is defnied in <string.h> header file*/
/*Description: The strlcat() function truncates a string src to string dst.*/
/*Return Value: returns the total length of the string it tried to create*/
/*Source: https://linux.die.net/man/3/strlcat*/

#include "../../include/libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t maxlen)
{
    int i;
    int j;
    int c;

    c = 0;
    j = 0;
    i = maxlen;
    while (dest[j] != '\0')
        j++;
    while (dest[c] != '\0' && i-- >= 0)
        dest[j++] = src[c++];
    if (ft_strlen((char *)src) < maxlen)
        return (ft_strlen(dest) + maxlen);
    return (ft_strlen(dest) + c);
}