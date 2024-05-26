/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:32:12 by adelat            #+#    #+#             */
/*   Updated: 2024/05/26 14:16:36 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_struct.h"

void ft_init(t_atoi_struct *data)
{
	data->result = 0;
	data->i = 0;
	data->sign = 0;
}

static inline int ft_is_wspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\t' || c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

static inline int ft_is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


int ft_atoi(char *str, t_atoi_struct *data)
{
	while (ft_is_wspace(str[data->i]))
		data->i++;
	while (str[data->i] == '+' || str[data->i] == '-')
	{
		if (str[data->i] == '-')
			data->sign++;
		data->i++;
	}
	while (ft_is_nbr(str[data->i]))
	{
		data->result *= 10;
		data->result += str[data->i] - '0';
		data->i++;
	}
	if (data->sign % 2 == 1)
		data->result *= -1;
	return data->result;
}


int main(int argc, char *argv[])
{
	t_atoi_struct data;
	
	ft_init(&data);
	printf("%i\n", ft_atoi(argv[1], &data));
}