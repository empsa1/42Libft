/*Library: The itoa() function is defined in <stdlib.h> header file*/
/*Description: "The itoa() function coverts the integer n into a character string. The string is placed in the buffer passed, which must be large enough to hold the output"*/
/*Return Value: String pointer (same as buffer) will be returned. When passed a non-valid radix argument, function will return NULL and set errno to EINVAL*/
/*Source: https://www.ibm.com/docs/en/zos/2.2.0?topic=functions-itoa-convert-int-into-string*/ 

#include "../../include/libft.h"

static  int n_length(int result, int n)
{
    while (n >= 1)
    {
        result++;
        n = n / 10;
    }
    return (result - 1);
}

char    *ft_itoa(int n)
{
    int length;
    char *result;

    if (n < 0)
    {
        n = n * (-1);
        length = n_length(1, n); 
        result = malloc((++length) * sizeof(char));
        result[0] = '-';
    }
    else if (n == 0)
        return ("0");
    else
    {
        length = n_length(1, n);
        result = malloc((length) * sizeof(char));
    }
    result[length] = '\0';
    while (--length >= 0 && n >= 1)
    {
        result[length] = n % 10 + '0';
        n = n / 10;
    }
    return (result);
}
