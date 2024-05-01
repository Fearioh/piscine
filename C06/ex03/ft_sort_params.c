/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:01:11 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 10:17:28 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = - 1;
	if	(str[++i])
	{
		write(1, &str[i], 1);
		ft_putstr(&str[i+1]);
	}
	else
		write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return s1[i] - s2[i];
		else if (s1[i] < s2[i])
			return s1[i] - s2[i];
		i++;
	}
	if (s1[i])
		return s1[i];
	else if (s2[i])
		return 0 - s2[i];
	return 0;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	if (s1[0] && !s2[0])
		return s1[0];
	else if (!s1[0] && s2[0])
		return 0 - s2[0];
	else if (!s1[0] && !s2[0])
		return 0;
	cmp = ft_comp(s1, s2);
	return cmp;
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	char *tab;

	i = 0;
	j = 0;
	tab = "";
	while (i != argc)
	{
		if (ft_strcmp(argv[i], argv[j]) < 0)
		{
			tab = argv[i];
			argv[i] = argv[j];
			argv[j] = tab;
		}
		else
			j++;
		i++;
		j++;
	}
	i = argc;
	while (--i != 0)
		ft_putstr(argv[i]);
}

