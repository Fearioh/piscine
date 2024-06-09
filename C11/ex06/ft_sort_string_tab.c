/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:42:16 by adelat            #+#    #+#             */
/*   Updated: 2024/06/09 13:51:10 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_string_tab(char **tab)
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
			if(!tab[i + 1][j] || (tab[i][j] > tab[i + 1][j]))
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


