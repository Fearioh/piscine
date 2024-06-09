/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:46:26 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 16:04:06 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_printList(t_list *list)
{
	if(!list)
		printf("La Liste est vide\n");
	else
		while(list)
		{
			printf("------------------\n\t%i\n------------------\n", list->data);
			list = list->next;			
		}
}