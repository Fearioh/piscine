/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:52:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 12:30:34 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checkfirst(char *str, int i, int first)
{
	if (first == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
			return 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			return 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			return 1;
		return 0;
	}
	if (first == 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			return 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			return 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			return 1;
		return 0;
	}
	return 0;
}

int	ft_reset_check(int change, char *str, int i)
{
	if (change == 1 && ((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= '0' && str[i] <= '9')))
			change = 0;
	return change;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;
	int	change;

	i = 0;
	change = 0;
	first = 0;
	while (str[i])
	{
		if (first == 0)
			change = 1;
		first = ft_checkfirst(str, i, first);
		if (change == 0 && str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			str[i] += 32;
		if (change == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			change = 0;
		}
		change = ft_reset_check(change, str, i);
		i++;
	}
	return str;
}

#include <unistd.h>

char	*ft_strcapitalize(char *src);

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

int		main()
{
	char c[] = "Salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr("\n");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr("\t");
	ft_putstr(":");
	ft_putstr("\t");
	ft_putstr(c);
}