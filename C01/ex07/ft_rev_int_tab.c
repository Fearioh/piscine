/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:28:10 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 14:05:50 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (i < size - 1)
	{
		i++;
		printf("%d\n", tab[i]);
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stock;

	i = 0;
	stock = 0;
	while (i != ((size / 2) + (size % 2)))
	{
		stock = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = stock;
		i++;
	}
	ft_print_tab(tab, size);
}

int	main(void)
{
	int	tab[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 74};
	ft_rev_int_tab(tab, 12);
}