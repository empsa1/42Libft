/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:20:57 by eportela          #+#    #+#             */
/*   Updated: 2023/07/30 23:05:48 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The memmove() function is defined in <string.h> header file*/
/*Description: The C library function void *memmove(void *str1, const void *str2, size_t n) 
copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is 
a safer approach than memcpy().*/
/*Return Value: This function returns a pointer to the destination, which is str1.*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_memmove.htm*/

#include "../../include/libft.h"

void *ft_memmove(void *string, int c, size_t n)
{
	char *string_char;
    int i;
    int j;

    j = 0;
    i = n;
    string_char = (char *) string;
    while(i-- >= 0)
        string_char[j++] = c;
    return (string_char);
}