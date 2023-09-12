/*Library: The tolower() function is defnied in <ctyphe.h> header file*/
/*Description: "The tolower() function takes an uppercase alphabet and convert it to a lowercase character."*/
/*Return Value: returns the corresponding value of the lowercased character in integer form*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/tolower*/

#include "../../include/libft.h"

int ft_tolower(int argument)
{
    if (ft_isalpha(argument) == 2) //if return value is lowercased already
        return (argument);
    if (ft_isalpha(argument) == 1) //if return value is uppercased
        return (argument + 32);
    return (0);
}