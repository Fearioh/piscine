/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:56:28 by adelat            #+#    #+#             */
/*   Updated: 2024/04/29 21:58:52 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int	ft_errorcheck(char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return 1;
			j++;
		}
		i++;
	}
	if (i < 2)
		return 1;
	else
		return 0;
}

char	ft_nbrtobase(int nbr, char *base)
{
	char	c;

	c = '0';
	nbr = nbr % ft_strlen(base);
	c = base[nbr];
	return c;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	error;
	char	c;

	c = '0';
	error = ft_errorcheck(base);
	if (error == 1)
		return;
	if (nbr / ft_strlen(base) > 0)
		ft_putnbr_base(nbr / ft_strlen(base) , base);
	c = ft_nbrtobase(nbr, base);
	write (1, &c, 1);
}

int	main(void)
{
	ft_putnbr_base(123, "poneyvif");
}