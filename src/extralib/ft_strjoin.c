/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
    char* result;

    result = ft_strnew(ft_strlen((char*) s1) + ft_strlen((char *)s2));
    ft_strlcat(result, s1 ,ft_strlen((char *)s1));
    ft_strlcat(result, s2, ft_strlen((char *)s2));
    return (result);
}