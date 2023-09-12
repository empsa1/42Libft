/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:03:17 by eportela          #+#    #+#             */
/*   Updated: 2023/07/30 23:12:00 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The strlen() function is defnied in <string.h> header file*/
/*Description: "The strlen() function calculates the length of a given string."*/
/*Return Value: size_t type variable that calculates the length of a string without counting the null character at the end*/
/*Source: https://www.programiz.com/c-programming/library-function/string.h/strlen*/

#include "../../include/libft.h"

size_t	ft_strlen(char *string)
{
	size_t length;
	
	length = 0;
	while (*string++)
		length++;
	return (length);
}