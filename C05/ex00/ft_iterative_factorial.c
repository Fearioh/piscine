/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:45:03 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 17:48:32 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	while (--n > 1)
		nb = nb * n;
	return nb;
}

int	main(void)
{
	int	nb;

	nb = ft_iterative_factorial(16);
	printf("%d\n", nb);
}