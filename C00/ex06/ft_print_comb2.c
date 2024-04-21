/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:18:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/21 14:53:51 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	if ((a < c) || (a == c && b < d))
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 1);
		write (1, &c, 1);
		write (1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
			write (1, ", ", 2);
	}
}

void	ft_printcheck(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_printcheck(a, b, c, d);
}

int main(void)
{
	ft_print_comb2();
}
