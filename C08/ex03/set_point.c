/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:21:11 by adelat            #+#    #+#             */
/*   Updated: 2024/05/26 14:34:35 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

t_point *set_point(void)
{
	t_point	*point = malloc(sizeof(t_point));
		
	point->x = 42;
	point->y = 21;
	return point;
	
}

int	main(void)
{
	t_point *point = set_point();
	printf("x -> %i | y -> %i", point->x, point->y);
	free(point);
}