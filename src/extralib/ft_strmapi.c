/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char * result;
    int index;

    index = 0;
    result = ft_strnew(ft_strlen((char *)s));
    while (s[index++] != '\0')
    {
        *result++ = (*f)(index, s[index]);
    }
    return (result);
}