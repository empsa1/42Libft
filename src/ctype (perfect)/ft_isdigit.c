/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:25:40 by eportela          #+#    #+#             */
/*   Updated: 2023/07/09 20:10:45 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The isdigit() function is defnied in <ctyphe.h> header file*/
/*Description: "The isdigit() function checks whether a character is numeric character (0-9) or not."*/
/*Return Value: [0 if argument is not a numeric character] [Non zero integer (> 0) if argument is a numeric character]*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/isdigit*/

#include "../../include/libft.h"

int	ft_isdigit(int argument)
{
	if(argument >= 48 && argument <= 57) //ASCII TABLE
		return(1);
	return(0);
}