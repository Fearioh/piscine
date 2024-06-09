/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeOne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:43:31 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 13:45:12 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_freeOne(t_list *list, void (*free_fct)(void *))
{
	// t_list *cur;
	
	// cur = list;
	// if(list)
	// {
	// 	cur = cur->next;
	// 	free_fct(list->data);
	// 	free(list);
	// 	list = cur;
	// }

	if (free_fct)
		free_fct(list->data);
	free(list);
}
