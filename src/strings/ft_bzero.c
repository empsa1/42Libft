/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:12:26 by eportela          #+#    #+#             */
/*   Updated: 2023/07/10 04:49:35 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The bzero() function is defnied in <strings.h> header file*/
/*Description: "The bzero() function places n zero-valued bytes in the area pointed to by s."*/
/*Return Value: returns no values and no errno values neither*/
/*Source: https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-bzero-zero-bytes-in-memory*/

#include "../../include/libft.h"

void ft_bzero(void *s, size_t n)
{
    char* nullifier;
    int size;
    int temp;

    temp = n;
    nullifier = (char *)s;
    size = ft_strlen(nullifier);
    while(size-- >= 0 && temp > 0)
        *nullifier++ = '\0';
}
