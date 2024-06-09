/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:46:50 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 14:17:18 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void(*free_fct)(void *))
{
	t_list *prev;
	t_list *cur = *begin_list;

	if (!begin_list || !cmp || !free_fct)
		return ;
	while (!cmp(cur->data, data_ref) && cur)
	{
		
		prev = cur;
		cur = cur->next;
		*begin_list = cur;
		free_fct(prev->data);
		free(prev);
	}
	while(cur)
	{
		if(!cmp(cur->data, data_ref))
		{
			prev->next = cur->next;
			free_fct(cur->data);
			free(cur);
			cur = prev->next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}
