/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:15:13 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 15:47:14 by adelat           ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 1;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
			true = 0;
		i++;
	}
	return true;
}

int ft_str_is_alpha_hook(char *str)
{
	int i = -1;

	while (str[++i])
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	return (1);
}

int	main(void)
{
	int true = ft_str_is_alpha_hook("ddss3sdsd");

	printf("%d\n", true);
}