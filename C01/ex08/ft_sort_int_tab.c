/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:44:37 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 14:02:39 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:28:10 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 12:46:04 by adelat           ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	stock;

	i = -1;
	stock = 0;
	while (i++ != size - 2)
	{
		if (tab[i] > tab[i + 1] && i != size)
		{
			stock = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = stock;
			i = -1;
		}
	}
	ft_print_tab(tab, size);
}

int	main(void)
{
	int	tab[14] = {9, 7, 2, 5, 6, 8, 1, 0, 4, 3, 140, -3, 75, 2};
	ft_sort_int_tab(tab, 14);
}