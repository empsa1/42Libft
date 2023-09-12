/*Library: The strchr() function is defnied in <string.h> header file*/
/*Description: "strchr() searches for the last occurrence of the character c in the string pointed to by the argument str."*/
/*Return Value: This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strrchr.h*/

#include "../../include/libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char* str1_string;
    char* str2_string;
    int i;

    i = n;
    str1_string = (char *)str1;
    str2_string = (char *)str2;
    while (i-- >= 0)
    {
        if (*str1_string != *str2_string)
            return (str1_string - str2_string);
        str1_string++;
        str2_string++;
    }
    return (0);
}