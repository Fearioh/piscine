/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:49:21 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 11:55:00 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a = 1000;
	int b = 42;
	int division = 0;
	int modulo = 0;
	int *div = &division;
	int *mod = &modulo;

	ft_div_mod(a, b, div, mod);
	printf("La division de a par b vaut %d et le reste de la division de a par b vaut %d", division, modulo);
}