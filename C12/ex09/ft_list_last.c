/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:22:23 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 14:27:47 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *where = begin_list;
	
	while(where->next)
	{
		where = where->next;
	}
	return where;
}

/*
1 --> 2


2 --> 3


3 --> null
*/