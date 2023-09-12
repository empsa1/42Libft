/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char* sub_s;

    sub_s = malloc(len);
    if (start >= ft_strlen((char *)s) || len > ft_strlen((char *)s))
        return (NULL);
    while (start++ >= len)
        *sub_s++ = s[start];
    *sub_s = '\0';
    return (sub_s);
}