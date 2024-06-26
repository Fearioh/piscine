/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:41:15 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 11:44:26 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

int	main(void)
{
	int	i = 0;
	int	j = 42;
	int *a = &i;
	int	*b = &j;
	
	ft_swap(a, b);
	printf("a = %d et b = %d", i, j);
}