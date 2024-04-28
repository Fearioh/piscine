/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:54:11 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 12:20:07 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 1;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			true = 0;
		i++;
	}
	return true;
}

int	main(void)
{
	int	i = 0;

	i = ft_str_is_numeric("12981d92819");
	int j = ft_str_is_numeric("334934239391234567890");
	printf("%d%d\n", i,j);
}