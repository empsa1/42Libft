/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:16:49 by eportela          #+#    #+#             */
/*   Updated: 2023/07/30 23:05:55 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The memcpy() function is defined in <string.h> header file*/
/*Description: "memcpy() copies n characters from memory area src to memory area dest."*/
/*Return Value: This function returns a pointer to destination, which is str1.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_memcpy.htm*/

#include "../../include/libft.h"

void    *ft_memcpy(void *to, const void *from, size_t numBytes)
{
    char *toString;
    char *fromString;
    int i;
    int j;
    
    j = 0;
    i = numBytes;
    toString = (char *)to;
    fromString = (char *)from;
    while (i-- >= 0 && toString[j] != '\0' && fromString[j] != '\0')
    {
        toString[j] = fromString[j];
        j++;
    }
    return (toString);
}
