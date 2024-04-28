/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:39:19 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 20:46:46 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void	ft_putstr(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, str, i);
}

int	main(void)
{
	ft_putstr("Salut les homies !");
}