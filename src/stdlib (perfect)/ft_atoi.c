/*Library: The atoi() function is defnied in <stdlib.h> header file*/
/*Description: "The C library function int atoi(const char *str) converts the string argument str to an integer (type int)."*/
/*Return Value: [0 if argument could not be converted to a numerical value] [the numerical value otherwise] i also protected it agaisnt long ints in input by checking my_atol first*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm*/

#include "../../include/libft.h"

int ft_atoi(const char *argument)
{
    int i;
    int result;
    int signal;

    i = 0;
    result = 0;
    signal = 1;
    if (my_atol(argument) > 2147483647)
        return (0);
    if (aux_signal(argument[0]) != 0)
        signal = aux_signal(argument[i++]);
    while (argument[i] != '\0')
    {
        if (ft_isdigit(argument[i]) == 0)
            return (0);
        result = result * 10 + argument[i++] - '0';
    }
    return (result * signal);
}
