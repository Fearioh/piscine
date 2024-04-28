/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 07:26:43 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 13:15:35 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tohexa(char *str, int i)
{
	char	a;
	int		b;

	a = 0;
	b = 0;
	while (a != str[i])
	{
		a++;
		b++;
	}
	a = b / 16 + '0';
	if (a > '9')
		a += 39;
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
		if (str[i] < 32 || str[i] >= 127)
			ft_tohexa(str, i);
		else
			write(1, &str[i], 1);
		i++;
	}
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

#include <stdio.h>

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?\t:\t");
	ft_putstr_non_printable(c);
	ft_putstr("\n");
	char d[] = "\x81\xbe";
	//printf("%s",d);
	ft_putstr_non_printable(d);
}