/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:54:38 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 18:55:33 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:58:27 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 15:59:43 by adelat           ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 1;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			true = 0;
		i++;
	}
	return true;
}

int	main(void)
{
	int	i = 0;

	i = ft_str_is_uppercase("AZEOAE JZOEJA");
	printf("%d\n", i);
}