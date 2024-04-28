/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:58:27 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 12:21:40 by adelat           ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 1;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			true = 0;
		i++;
	}
	return true;
}

int	main(void)
{
	int	i = 0;

	i = ft_str_is_lowercase("dzfAdezef");
	int j = ft_str_is_lowercase("qwertyuiopasdfghjklzxcvbnm");
	printf("%d%d\n", i, j);
}