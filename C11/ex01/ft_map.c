/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:25:20 by adelat            #+#    #+#             */
/*   Updated: 2024/06/09 13:28:13 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*tabR;
	int i;
	
	if (!tab || !f)
		return ;
	i = 0;
	tabR = malloc(sizeof(int) * length);
	while(tab[i])
	{
		tabR[i] = f(tab[i]);
		i++;
	}
	return tabR;
}