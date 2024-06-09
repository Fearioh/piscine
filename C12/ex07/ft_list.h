/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:33:06 by adelat            #+#    #+#             */
/*   Updated: 2024/06/02 15:25:28 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef	struct	s_list
{
	int					data;
	char				*str;
	struct	s_list		*next;
}						t_list;


void	ft_printList(t_list *list);
void	ft_free(t_list *list);
t_list	*ft_create_elem(char *str);
void	ft_list_push_front(t_list **begin_list, char *str);
int	ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, int data);
t_list	*ft_list_push_strs(int size, char **strs);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);


#endif