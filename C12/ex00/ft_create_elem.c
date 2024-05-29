/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:36:30 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 16:06:42 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(int data)
{
		t_list *list;

		list = malloc(sizeof(t_list));
		list->data = data;
		list->next = NULL;
		return list;
}

int	main(void)
{
	t_list *list;

	list = ft_create_elem(17);
	ft_printList(list);
	ft_free(list);
}