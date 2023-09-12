/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:26:44 by eportela          #+#    #+#             */
/*   Updated: 2023/07/07 17:52:11 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The isalpha() function is defnied in <ctyphe.h> header file*/
/*Description: "The isalpha() function checks whether a character is an alphabet or not."*/
/*Return Value: [0 if argument isn't an alphabet] [Non zero number if argument is an alphabet]*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/isalpha*/

#include "../../include/libft.h"

int	ft_isalpha(int argument)
{
	if (argument >= 65 && argument <= 90) //ASCII TABLE (uppercase)
		return(1);
	if (argument >= 97 && argument <= 122) //ASCII TABLE (lowercase)
		return(2);
	return(0);
}