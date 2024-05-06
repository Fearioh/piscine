/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:32:09 by adelat            #+#    #+#             */
/*   Updated: 2024/05/06 12:36:16 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return n;
	else
		return 0;
}

int	main(void)
{
	int	n;

	n = ft_sqrt(16);
	printf("%d\n", n);
}