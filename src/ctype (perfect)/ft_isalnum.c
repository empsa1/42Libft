/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bodyflicker <bodyflicker@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:26:40 by eportela          #+#    #+#             */
/*   Updated: 2023/07/09 20:12:23 by bodyflicker      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Library: The isalnum() function is defined in <ctyphe.h> header file*/
/*Description: "The isalnum() function checks whether the argument passed is an alphanumeric character (alphabet or number) or not."*/
/*Return Value: [0 if argument is neither an alphabet nor a digit] [1 if argument is an alphanumeric character]*/
/*Source: https://www.programiz.com/c-programming/library-function/ctype.h/isalnum*/

#include "../../include/libft.h"

int	ft_isalnum(int argument)
{
	if(ft_isalpha(argument) > 0 || ft_isdigit(argument) > 0)
		return(1);
	return (0);
}