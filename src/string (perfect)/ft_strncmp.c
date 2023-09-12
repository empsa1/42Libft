/*Library: The strncmp() function is defnied in <string.h> header file*/
/*Description: "strncmp compares at most the first n bytes of str1 and str2."*/
/*Return Value: <0 if first string is lesser, >0 if second string is lesser, 0 if equal*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_strncmp.htm*/

#include "../../include/libft.h"

int ft_strncmp(const char *argument1, const char *argument2, size_t maxlen)
{
    int i;

    i = maxlen;
    while (*argument1++ != '\0' && *argument2++ != '\0' && i-- >= 0)
    {
        if (*argument1 != *argument2)
            return (*argument1 - *argument2);
    }
    if (*argument1 != '\0')
        return (*argument1);
    if (*argument2 != '\0')
        return (*argument2);
    return (0);
}