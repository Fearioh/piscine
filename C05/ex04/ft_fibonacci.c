/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:17:55 by adelat            #+#    #+#             */
/*   Updated: 2024/05/06 12:30:37 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = index;
	if (index < 0)
		return -1;
	if (index >= 2)
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return n;
}

int	main(void)
{
	int	n;

	n = ft_fibonacci(-6);
	printf("%d\n", n);
}