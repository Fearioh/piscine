/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:58:10 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 09:59:14 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = - 1;
	if	(str[++i])
	{
		write(1, &str[i], 1);
		ft_putstr(&str[i+1]);
	}
	else
		write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (--i > 0)
		ft_putstr(argv[i]);
}