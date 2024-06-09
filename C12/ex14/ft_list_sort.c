/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:34:01 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 14:47:48 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *prev = NULL;
	t_list *cur = *begin_list;
	t_list *tmp = NULL;

	while(cur)
	{
		if (prev)
		{
			if(cmp(cur->data, prev->data) < 0)
			{
				tmp->data = prev->data;
				prev->data = cur->data;
				cur->data = tmp->data;
				cur = *begin_list;
				prev = NULL;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}