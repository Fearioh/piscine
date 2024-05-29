/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:33:06 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 16:06:59 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef	struct	s_list
{
	int					data;
	struct	s_list		*next;
}						t_list;


void	ft_printList(t_list *list);
void	ft_free(t_list *list);


#endif