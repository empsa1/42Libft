/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:06:16 by eportela          #+#    #+#             */
/*   Updated: 2023/07/30 23:09:10 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The memset() function is defnied in <string.h> header file*/
/*Description: The memset() function copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.*/
/*Return Value: Returns a pointer to the memory area str*/
/*Source: https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm*/

#include "../../include/libft.h"

void *memset(void *s, int c, size_t n)
{
	int step;
	unsigned char *ptr;
	int i;

	i = n;
	step = 0;
	ptr = (unsigned char*) s;
	if (!s || n <= 0 || ft_strlen(s) < n)
		return (s);
	while(step < i)
		ptr[step--] = c;
	return (ptr);
}