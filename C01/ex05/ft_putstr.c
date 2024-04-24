/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:08:57 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 12:17:36 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int mais_dit_moi_ca_fait_combien_de_caractere(char *str)
{
	int i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, mais_dit_moi_ca_fait_combien_de_caractere(str));
}

int	main(void)
{
	ft_putstr("Salut les homies !");
}