/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:41:11 by adelat            #+#    #+#             */
/*   Updated: 2024/05/07 21:20:26 by adelat           ###   ########.fr       */
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

int	main(void)
{
	int	n;

	n = ft_is_prime(7);
	printf("%d\n", n);
}