/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:47:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 22:12:21 by adelat           ###   ########.fr       */
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
	while (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			pos++;
		if (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + ft_nbr(str, i, nbr);
		i++;
	}
	if (pos % 2 == 1)
		return (nbr * (-1));
	else
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

int	main(void)
{
	int i = 0;
	int j = 0;

	i = ft_atoi("a2");
	j = atoi("a2");
	ft_putnbr(i);
	printf("\nft_atoi \natoi\n");
	ft_putnbr(j);
}