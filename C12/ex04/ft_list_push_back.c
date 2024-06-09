/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:32:38 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 14:50:06 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, int data)
{
	t_list *new;
	t_list *where = *begin_list;

	new = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new;
		(void)where;
	}
	else
	{
		while(where->next)
			where = where->next;
		where->next = new;
	}
}