/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:49:19 by eportela          #+#    #+#             */
/*   Updated: 2023/07/07 17:52:15 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The isascii() function is defnied in <ctyphe.h> header file*/
/*Description: "The isascii() function tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character."*/
/*Return Value: [0 if argument cannot be represented as a valid 7-bit US-ASCII character] [Non zero if otherwise]*/
/*Source: https://www.ibm.com/docs/en/i/7.3?topic=functions-isascii-test-character-representable-as-ascii-value*/

#include "../../include/libft.h"

int	ft_isascii(int argument)
{
	if (argument >= 0 && argument <= 127) //ASCII TABLE
		return (1);
	return (0);
}