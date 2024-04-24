/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:37:55 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 11:19:39 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	b;
	

	if(nb < 0)
	{
		write(1, "-", 1);
		b = nb;
		b *= -1;
	}
	else
		b = nb;
	if (b / 10 > 0)
		ft_putnbr(b / 10);
	c = (b % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr_itteratif(int nb)
{
	int		i;
	char	tab[11];

	i = -1;
	if (nb == INT_MIN)
		return (write(1, "-2147483648", 11), (void)1);
	if (nb == 0)
		return (write(1, "0", 1), (void)2);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[++i] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i >= 0)
	{
		write(1, &tab[i], 1);
		i--;
	}
}

int main(void)
{
	ft_putnbr_itteratif(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr_itteratif(-7737344);
	write(1, "\n", 1);
	ft_putnbr_itteratif(0);
	write(1, "\n", 1);
	ft_putnbr_itteratif(73472483);
	write(1, "\n", 1);
	ft_putnbr_itteratif(INT_MAX);
}