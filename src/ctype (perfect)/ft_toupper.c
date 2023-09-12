/*Library: The toupper() function is defined in <ctyphe.h> header file*/
/*Description: "The toupper() function converts a lowercase alphabet to an uppercase alphabet."*/
/*Return Value: returns the corresponding value of the uppercased character in integer form*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/toupper*/

#include "../../include/libft.h"

int ft_toupper(int argument)
{
    if (ft_isalpha(argument) == 1)
        return (argument);
    if (ft_isalpha(argument) == 2)
        return (argument - 32);
    return (0);
}