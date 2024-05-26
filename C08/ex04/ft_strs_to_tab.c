/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:36:50 by adelat            #+#    #+#             */
/*   Updated: 2024/05/26 15:06:56 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

static inline int ft_strlen(char *str)
{
	int	i;

	i = -1;
	while(str[++i])
		;
	return i;
}

static inline char	*ft_strdup(char *str)
{
	char	*cpy;
	int	i;

	i = -1;
	cpy = malloc(sizeof(char) * ft_strlen(str));
	while(str[++i])
		cpy[i] = str[i];
	cpy[i] = '\0';
	return cpy;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;

	i = 0;
	t_stock_str *tab = malloc(sizeof(t_stock_str) * (ac + 1));
	while(i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return tab;
}

void	ft_putnbr(int i)
{
	char c;

	c = '0';
	if (i / 10 > 0)
		ft_putnbr(i / 10);
	c = c + (i % 10);
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n===========\n", 14);
		i++;
	}
}

void	ft_free(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while(par[i].str)
	{
		free(par[i].copy);
		i++;
	}
	free(par);
}

int	main(int argc, char **argv)
{
	t_stock_str *par;

	par = ft_strs_to_tab(argc, argv);
	ft_show_tab(par);
	ft_free(par);
	return 0;
}