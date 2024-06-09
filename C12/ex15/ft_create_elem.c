/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:36:30 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 19:17:26 by adelat           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_list *list = NULL;
	//int nb;
	//t_list *last;

	(void)argc;
	(void)argv;
	list = ft_create_elem(1);
	ft_list_push_front(&list, 2);
	ft_list_push_front(&list, 3);
	ft_list_push_front(&list, 4);
	ft_list_push_front(&list, 5);
	ft_list_push_front(&list, 6);
	ft_list_push_front(&list, 7);
	ft_list_reverse_fun(list);
	ft_printList(list);
	//last = ft_list_last(list);
	// ft_printList(last);
	// nb = ft_list_size(list);
	//printf("%i\n", nb);
	ft_free(list);
}