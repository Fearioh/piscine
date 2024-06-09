/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:40:31 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 11:43:58 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*here;
	
	if(!begin_list || !cmp)
		return NULL;
	here = begin_list;
	while(here)
	{
		if (!cmp(here->data, data_ref))
			return here;
		here = here->next;
	}
	return NULL;
}