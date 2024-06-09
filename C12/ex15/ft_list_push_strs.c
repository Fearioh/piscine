/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:54:11 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 15:06:22 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	int i;

	i = 0;
	list = NULL;
	if (strs[0])
		list = ft_create_elem(strs[0]);
	while(++i < size)
		ft_list_push_front(&list, strs[i]);
	return list;
}