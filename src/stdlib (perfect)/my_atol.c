#include "../../include/libft.h"

/*With time during my 42 days as a student it became evident that in multiple projects the atol function was very useful for the most diverse reasons so i decided to implement
it in my libft project so it would be easier to come and get it to another project
This function as the same purpose that atoi has but works with bigger numbers*/

long int    my_atol(const char *argument)
{
    int         i;
    long int    result;
    int         limit;
    int         signal;

    i = 0;
    result = 0;
    signal = 1;
    if (aux_signal(argument[0]) != 0)
        signal = aux_signal(argument[i++]);
    while (i < limit)
    {
        if (ft_isdigit(argument[i]) == 0)
            return (result * signal);
        result = result * 10 + argument[i++];
    }
    return (result * signal);
}