/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:33:33 by adelat            #+#    #+#             */
/*   Updated: 2024/06/09 13:40:57 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sortUP(int *tab, int length, int(*f)(int, int))
{
	int i = 0;

	while (i < length - 1)
	{
		if (f(tab[i], tab[i+1]) >= 1)
			return 0;
		i++;
	}
	return 1;
}

int	ft_is_sortDOWN(int *tab, int length, int(*f)(int, int))
{
	int i = 0;

	while (i < length - 1)
	{
		if (f(tab[i], tab[i+1]) <= -1)
			return 0;
		i++;
	}
	return 1;
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int ret;

	ret = 0;
	if (ft_is_sortDOWN(tab, length, f) || ft_is_sortUP(tab, length, f))
		return 1;
	else
		return 0;
}