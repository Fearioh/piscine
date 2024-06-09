/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:33:44 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 11:38:36 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)())
{
	t_list	*here;
	
	here = begin_list;
	while(here)
	{
		if (!cmp(here->data, data_ref))
			f(here->data);
		here = here->next;
	}
}