/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:25:57 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 19:42:34 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *new = ft_create_elem(data);
	t_list *ptr = *begin_list;
	t_list *tmp = NULL;

	if(!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	if (cmp(ptr->data, new->data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	tmp = ptr;
	ptr = ptr->next;
	while(ptr)
	{
		if (cmp(ptr->data, new->data) > 0)
		{
			tmp->next = new;
			new->next = ptr;
			return ;
		}
		tmp = ptr;
		ptr = ptr->next;
	}
	ptr = new;
}