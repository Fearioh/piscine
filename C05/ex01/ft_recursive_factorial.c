/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:52:07 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 18:00:49 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	else if (nb < 1)
		return 0;
	return nb;
}

int	main(void)
{
	int	nb;

	nb = ft_recursive_factorial(-5);
	printf("%d\n", nb);
}