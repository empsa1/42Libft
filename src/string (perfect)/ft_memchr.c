/*Library: The memchar() function is defined in <string.h> header file*/
/*Description: "memchar() searches for the first occurrence of the character in the first n bytes of the string pointed to, by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_memchr.htm*/

#include "../../include/libft.h"

void *ft_memchr(const void *argument, int c, size_t maxlen)
{
    unsigned char *temp;

    temp = (unsigned char *)argument;
    while (maxlen--)
    {
        if (*temp == (unsigned char)c)
            return &(*temp);
        temp++;
    }
    return (NULL);
}