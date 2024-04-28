/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:54:38 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 12:24:17 by adelat           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 1;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			true = 0;
		i++;
	}
	return true;
}

int	main(void)
{
	int	i = 0;

	i = ft_str_is_printable("Salut les\n Homies !");
	printf("%d\n", i);
}