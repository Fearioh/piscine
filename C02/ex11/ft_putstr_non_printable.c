/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 07:26:43 by adelat            #+#    #+#             */
/*   Updated: 2024/04/27 08:36:30 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tohexa(char *str, int i)
{
	char	a;
	int	b;

	a = 0;
	b = 0;
	while (a != str[i])
	{
		a++;
		b++;
	}
	a = b / 16 + '0';
	write(1, "\\", 1);
	write(1, &a, 1);
	if ((b % 16) <= 9)
		a = b % 16 + '0';
	else
		a = (b % 16 - 10) + 'a';
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_tohexa(str, i);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char str[] = "Coucou\rtu vas bien ?";
	ft_putstr_non_printable(str);
}