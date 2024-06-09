/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:36:30 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 15:23:08 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(char *str)
{
		t_list *list;

		list = malloc(sizeof(t_list));
		list->str = str;
		list->next = NULL;
		return list;
}

int	main(int argc, char **argv)
{
	t_list *list = NULL;
	//int nb;
	//t_list *last;

	(void)argc;
	// list = ft_create_elem(17);
	// ft_list_push_front(&list, 18);
	// ft_list_push_front(&list, 1);
	// ft_list_push_front(&list, 2);
	// ft_list_push_front(&list, 3);
	// ft_list_push_front(&list, 4);
	// ft_list_push_front(&list, 5);
	list = ft_list_push_strs(5, argv);
	ft_printList(list);
	//last = ft_list_last(list);
	// ft_printList(last);
	// nb = ft_list_size(list);
	//printf("%i\n", nb);
	ft_free(list);
}