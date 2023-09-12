/*Auxiliar signal function to reduce verbose of atoi and atol functions in stdlib*/

#include "../../include/libft.h"

int aux_signal(char c)
{
    if (c == '-')
        return (-1);
    if (c == '+')
        return (1);
    return (0);
}