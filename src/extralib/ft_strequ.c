/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return (s1 == s2 ? 1 : 0);
    if (ft_strlen((char*)s1) != ft_strlen((char*)s2))
        return (0);
    while (*s1++ && *s2++)
        if (*s1 != *s2)
            return (0);
    return (1);
}