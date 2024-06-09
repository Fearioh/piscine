/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:53:06 by adelat            #+#    #+#             */
/*   Updated: 2024/06/09 13:54:33 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_string_tab(char **tab, int(*cmp)(char*, char*))
{
	int	i;
	int j;
	char *tmp;

	i = 0;
	while (tab[i + 1])
	{
		j = 0;
		while (tab[i][j])
		{
			if(cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				break;
			}
			j++;
		}
		i++;
	}	
}