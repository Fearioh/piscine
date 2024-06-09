/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:24:01 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 15:29:53 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *where;
	unsigned int w = 0;

	where = begin_list;
	while (w != nbr)
	{
		where = where->next;
		if (where == NULL)
			break;
		w++;
	}
	return where;
}