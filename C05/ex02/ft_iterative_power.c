/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:01:24 by adelat            #+#    #+#             */
/*   Updated: 2024/05/06 12:08:46 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;

	if (power == 0)
		return 0;
	while (power > 1)
	{
		nb = nb * n;
		power--;
	}
	while (power < 0)
	{
		nb = nb / n;
		power ++;
	}
	return nb;
}

int	main(void)
{
	int	nb;

	nb = ft_iterative_power(1, -2);
	printf("%d\n", nb);
}