/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:12:09 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 11:41:09 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	long	i;
	int	move;
	long size;

	i = 0;
	if (max <= min)
		return 0;
	move = min;
	size = (long)max - (long)min + 1;
	if (size <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = move;
		i++;
		move++;
	}
	return (tab);
}