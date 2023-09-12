#include "../../include/libft.h"

static int  ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

void    ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		flag;
	int		length;

	flag = (n < 0);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] =ft_abs(n % 10) + '0';
		n = n / 10;
	}
	if (flag)
		str[length] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		write(fd, &str[length--], 1);
}