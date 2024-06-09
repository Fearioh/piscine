/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:08:37 by adelat            #+#    #+#             */
/*   Updated: 2024/06/05 11:26:20 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(char *))
{
	t_list *element;
	t_list *last_element;

	element = begin_list;
	while (element)
	{
		free_fct(element->data);
		last_element = element;
		element = element->next;
		free(last_element);
	}
}