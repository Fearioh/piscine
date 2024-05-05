/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:37:45 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 11:59:17 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_error(char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if(!base)
		return 1;
	while (base[i])
	{
		j = i;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' 
		|| base[i] == '\f' || base[i] == '\t' || base[i] == '\n'
		|| base[i] == '\r' || base[i] == '\v')
			return 1;
		while(base[j++])
			if(base[i] == base[j])
				return 1;
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
	long	nb;
	int	i;
	int	j;
	int	more;
	
	nb = 0;
	i = 0;
	j = 0;
	more = 1;
	while ((size = ft_strlen_atoi(&str[i], base)) != 0)
	{
		j= 0;
		while(size-- > 1)
			more = more * ft_strlen(base);
		while (base[j] != str[i] && base[j])
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

int	ft_checkbase(int nb, char *base)
{
	long	nbr;
	int	check;

	nbr = nb;
	check = 0;
	if (nbr < 0)
		nbr *= -1;	
	while (nbr / ft_strlen(base) > 0)
	{
		nbr = nbr / ft_strlen(base);
		check++;
	}
	return check;
}

void	ft_conv_char(int base, int i, char *base_to, char *conv, long j)
{
	if (j < 0)
		j *= -1;		
	conv[base - i] = base_to[j];
}



void	ft_convert_nbr(int nb, int base, char *base_to, char *nbr, int move)
{
	long	j;
	int i;

	i = base;
	if (nb < 0)
	{
		nbr[0] = '-';
		nb *= -1;
		move++;
	}
	j = nb;
	if (--i == -1)
		j = j % ft_strlen(base_to);
	while (i > -1)
	{
		j = j / ft_strlen(base_to);
		i--;
	}
	nbr[move] = base_to[j];
	while(++i != base)
		j = j * ft_strlen(base_to);
	if (base > 0)
		ft_convert_nbr(nb - j, base - 1, base_to, nbr, ++move);
}

void	ft_putend(int nb, int base, char *nbr)
{
	if (nb < 0)
		nbr[base + 2] = '\0';
	else
		nbr[base + 1] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nb;
	int error;
	int	base;

	base = 0;
	error = ft_error(base_from);
	if (error == 1)
		return NULL;
	error = ft_error(base_to);
	if (error == 1)
		return NULL;
	nb = ft_atoi_base(nbr, base_from);
	base = ft_checkbase(nb, base_to);
	if (nb < 0)
		nbr = malloc(sizeof(char) * (base + 3));		
	else
		nbr = malloc(sizeof(char) * (base + 2));
	if (!nbr)
		return (NULL);
	ft_putend(nb, base, nbr);
	ft_convert_nbr(nb, base, base_to, nbr, 0);
	return nbr;
}

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr;
	
	nbr = ft_convert_base("--216317378", "0123456789", "01");
	printf("%s\n", nbr);
	free(nbr);
}