/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

char* ft_strnstr(const char *s, const char *find, size_t slen)
{
    while (slen-- >= ft_strlen((char*)find) && *s++ != '\0')
        if (ft_strncmp(s, find, ft_strlen((char*)find)) == 0)
            return ((char *)s);
    return (NULL);
}