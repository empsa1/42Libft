/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int index;
    int limit;

    limit = n;
    index = 0;
    if (!s1 || !s2)
        return (s1 == s2 ? 1 : 0);
    if (ft_strlen((char*)s1) != ft_strlen((char*)s2))
        return (0);
    while (s1[index++] != '\0' && s2[index++] != '\0' && (limit-- >= 0))
    {
        if (s1[index] != s2[index])
            return (0);
    }
    return (1);
}