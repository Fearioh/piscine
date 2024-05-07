/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:21:20 by adelat            #+#    #+#             */
/*   Updated: 2024/05/07 21:35:15 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 1;
	while (++prime < nb)
		if (nb % prime == 0)
			return 0;
	return 1;
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return nb;
}

int	main(void)
{
	int	n;

	n = ft_find_next_prime(98);
	printf("%d\n", n);
}