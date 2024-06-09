/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:46:26 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 15:04:39 by adelat           ###   ########.fr       */
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
			printf("------------------\n\t%s\n------------------\n", list->str);
			list = list->next;			
		}
}