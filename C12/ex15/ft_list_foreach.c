/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:19:38 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 11:28:43 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list	*here;

	if (!begin_list || !f)
		return ;
	here = begin_list;
	while(here)
	{
		f(here->data);
		here = here->next;
	}
}