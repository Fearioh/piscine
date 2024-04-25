/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:52:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/25 23:16:13 by adelat           ###   ########.fr       */
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

int	ft_norme(int change, char *str, int i)
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
		change = ft_norme(change, str, i);
		i++;
	}
	return str;
}

int	main(void)
{
	char str[21] = "salut les homies";
	
	ft_strcapitalize(str);
	printf("%s\n", str);
}