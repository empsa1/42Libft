/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/ 

#include "../../include/libft.h"

char **ft_strsplit(char const *s, char c)
{
    int     i;
    int     j; 
    char    **result;

    i = 0;
    j = 0;
    result = malloc(ft_strlen((char *)s) + 1);
    while (s[i] != '\0')
    {
        if (s[i] == c)
            while(s[i] != '\0')
                result[1][j] = s[i++];
        else
            result[0][i] = s[i];
        i++;
    }   
    return (result);
}