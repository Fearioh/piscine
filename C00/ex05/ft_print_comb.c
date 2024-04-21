/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:59:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/21 14:16:46 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(int a, int b, int c)
{
	if ((a != b) && (b != c) && (a != c))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
			write (1, ", ", 2);
	}
	c++;
	return (c);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '9')
		{
			while (c <= '9')
				c = ft_print(a, b, c);
			b++;
			c = b;
		}
		a++;
		b = a;
	}
}
