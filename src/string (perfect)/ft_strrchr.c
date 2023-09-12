/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.htm*/

#include "../../include/libft.h"

char    *ft_strrchr(const char *str, int c)
{
    while (*str++ != '\0')
    while (*str-- != '\0')
    {
        if (*str == c)
            return ((char *)str);
    }
    return (NULL);
}