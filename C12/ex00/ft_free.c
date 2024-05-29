/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:06:22 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 16:06:33 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_free(t_list *list)
{
	t_list *cur;
	
	cur = list;
	while(list)
	{
		cur = cur->next;
		free(list);
		list = cur;
	}
}
