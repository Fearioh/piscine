/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:47:49 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 09:05:32 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_nbr(char *str, int i, int nbr)
{
	nbr = str[i] - '0';
	return nbr;
}

int	ft_atoi(char *str)
{
	int	i;
	int	pos;
	int	nbr;

	i = 0;
	pos = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v')
				i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			pos++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + ft_nbr(str, i, nbr);
		i++;
	}
	if (pos % 2 == 1)
		return (nbr * (-1));
	return nbr;
}

void	ft_putnbr(int nb)
{
	char	c;

	c = '0';
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 > 0 )
		ft_putnbr(nb / 10);
	c = c + nb % 10;
	write (1, &c, 1);
}

int    main(void)
{
    printf("122:%d\n", ft_atoi("  \n  -++---+++--++++----++++----122-bndnnff"));
    printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
    printf("0:%d\n", ft_atoi("\0 1337"));
    printf("0:%d\n", ft_atoi("-0"));
    printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
    printf("-1325632167:%d\n", ft_atoi("-1325632167"));
    printf("-100:%d\n", ft_atoi("-100"));
    printf("min:%d\n", ft_atoi("\t---+2147483648"));
    printf("max:%d\n", ft_atoi("\v2147483647"));
}