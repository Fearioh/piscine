/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:05:27 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 19:15:43 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *here = begin_list;
	t_list *move = begin_list;
	int		stock = 0;
	int		size = ft_list_size(begin_list) - 1;
	int		comp = size;

	while(size >= (ft_list_size(begin_list) / 2))
	{
		comp = size;
		while(comp > 0)
		{
			move = move->next;
			comp--;
		}
		stock = move->data;
		move->data = here->data;
		here->data = stock;
		here = here->next;
		move = begin_list;
		size--;
	}
}