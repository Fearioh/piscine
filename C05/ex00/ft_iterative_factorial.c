/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:45:03 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 18:05:49 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 1)
		return 0;
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