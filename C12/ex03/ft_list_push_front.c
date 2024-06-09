/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:08:23 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 16:20:50 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, int data)
 {
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
 }