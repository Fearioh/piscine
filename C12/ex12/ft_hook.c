/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:00:03 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 14:20:28 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static inline void ft_my_free(t_list *ptr, void (*free_fct)(void *))
{
	if (free_fct)
		free_fct(ptr->data);
	free(ptr);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list *ptr = NULL;
	t_list *tmp = NULL;

	ptr = *begin_list;
	
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
		{
			if (tmp)
				tmp->next = ptr->next;
			else
				*begin_list = ptr->next;
			ft_my_free(ptr, free_fct);
			if (tmp)
				ptr = tmp->next;
			else
				ptr = *begin_list;
		}
		else
		{
			tmp = ptr;
			ptr = ptr->next;
		}
	}
}


