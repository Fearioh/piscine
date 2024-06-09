/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:17:33 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 14:27:41 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list**begin_list1, t_list *begin_list2)
{
	t_list *cur = *begin_list1;

	if (!*begin_list1)
		return ;
	while(cur)
		cur = cur->next;
	cur = begin_list2;
}