/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:23:49 by eportela          #+#    #+#             */
/*   Updated: 2023/07/30 23:11:50 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The strlcpy() function is defnied in <string.h> header file*/
/*Description: The strlcpy() function copy a string src to string dst.*/
/*Return Value: returns the total length of the string it tried to create*/
/*Source: https://linux.die.net/man/3/strlcpy*/

#include "../../include/libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	int i;
	int step;
	int temp;
	if (!dest || !src)
		return (0);
	
	temp = maxlen;
	i = ft_strlen((char *)src);
	if (maxlen > 0)
		{
			while (dest[step] != '\0' && step < (temp - 1))
				dest[step] = src[step++];
			while(step < (temp - 1))
				dest[step++] = '\0';
		}
		return (i);
}