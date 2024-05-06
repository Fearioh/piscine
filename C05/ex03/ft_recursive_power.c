/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:04:53 by adelat            #+#    #+#             */
/*   Updated: 2024/05/06 12:14:26 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return 0;
	if (power < 0 && nb > 1)
		return 0;
	if (power > 1)
		nb = nb * ft_recursive_power(nb, --power);
	return nb;	
}

int	main(void)
{
	int	nb;

	nb = ft_recursive_power(5, 4);
	printf("%d\n", nb);
}