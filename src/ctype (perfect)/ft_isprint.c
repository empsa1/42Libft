/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:59:09 by eportela          #+#    #+#             */
/*   Updated: 2023/07/06 22:59:00 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The isprint() function is defnied in <ctyphe.h> header file*/
/*Description: "The isprint() function checks whether a character is a printable character or not."*/
/*Return Value: [0 if argument is a non printable character] [Non zero integer (> 0) if argument is a printable character]*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/isprint*/

#include "../../include/libft.h"

int ft_isprint(int argument)
{
	if (argument >= 0 && argument <= 63) //PRINTABLE CHARACTERS FROM ASCII TABLE
		return (1);
	return (0);
}
