/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:32:18 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 19:23:27 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *new = NULL;
	t_list *current;

	while(*begin_list)
	{
		current = *begin_list;
        *begin_list = (*begin_list)->next;
        current->next = new;
        new = current;
	}
	
	*begin_list = new;
}