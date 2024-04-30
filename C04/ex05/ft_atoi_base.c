/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:39:38 by adelat            #+#    #+#             */
/*   Updated: 2024/04/30 23:55:30 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_error(char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == '\f' || base[i] == '\t' || base[i] == '\n'|| base[i] == '\r' || base[i] == '\v')
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

int	ft_strlen_atoi(char *str, char *base)
{
	int	i;
	int	j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (count == i)
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				count++;
			j++;
		}
		i++;
	}
	return count;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

unsigned int	ft_base_to_nbr(char *str, char *base, int pos, int size)
{
	int	nb;
	int	i;
	int	j;
	int	more;
	
	nb = 0;
	i = 0;
	j = -1;
	more = 1;
	while ((size = ft_strlen_atoi(&str[i], base)) != 0)
	{
		j= -1;
		while(size-- > 1)
			more = more * ft_strlen(base);
		while (base[j] != str[i])
			j++;			
		nb = nb + (more * (j));
		more = 1;
		i++;
	}
	if (pos % 2 > 0)
		nb *= -1;
	return nb;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	pos;
	int	error;
	unsigned int nb;
	int	size;

	error = 0;
	i = 0;
	pos = 0;
	nb = 0;
	size = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v')
				i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			pos++;
	if ((error = ft_error(base)) == 1)
		return 0;
	size = ft_strlen_atoi(&str[i], base);
	nb = ft_base_to_nbr(&str[i], base, pos, size);
	error = nb;
	return error;
}

int	main(void)
{
	int i = 0;

	i = ft_atoi_base("++-2147483648", "0123456789");
	printf("%d\n", i);
}