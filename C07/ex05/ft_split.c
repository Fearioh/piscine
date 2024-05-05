/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:21:00 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 16:42:15 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_free_mem(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free (tab);
}

int	ft_is_in_charset(char c, char *charset)
{
	int i;

	i = -1;
	while(charset[++i])
	{
		if (charset[i] == c)
			return 1; 
	}
	return 0;
}

int	ft_strlen_split(char *str, char *charset, int i)
{
	int	count;
	int	j;
	int k;

	k = 0;
	j = -1;
	count = 0;
	while (ft_is_in_charset(str[++j], charset))
		;
	while (count < i)
	{
		while(!ft_is_in_charset(str[j], charset) && str[j])
			j++;
		while (ft_is_in_charset(str[j], charset))
			j++;
		count++;
	}
	while (!ft_is_in_charset(str[j], charset) && str[j])
	{
		k++;
		j++;
	}
	return k;
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	size;

	i = -1;
	size = 2;
	if (!str)
		return 0;
	while (ft_is_in_charset(str[++i], charset))
		;
	while(str[i])
	{
		if (ft_is_in_charset(str[i], charset) && str[i + 1])
		{
			if (ft_is_in_charset(str[++i], charset))
				;
			else
				size++;
		}
		i++;
	}
	return size;
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**tab;
	int	k;

	k = 0;
	i = -1;
	tab = malloc(sizeof(char *) * (ft_size(str, charset)));
	if (!tab)
		return (ft_free_mem(tab),NULL);
	while (++i < ft_size(str, charset) - 1)
	{
		j = -1;
		tab[i] = malloc(sizeof(char) * ft_strlen_split(str, charset, i));
		if (!tab[i])
			return (ft_free_mem(tab),NULL);
		while (++j < ft_strlen_split(str, charset, i))
		{
			while (ft_is_in_charset(str[k], charset))
				k++;
			tab[i][j] = str[k];
			k++;
		}
		tab[i][j] = '\0';
	}
	tab[ft_size(str, charset)] = NULL;
	return tab;
}

int	main(void)
{
	int i;
	char	**tab;
	
	i = -1;
	tab = ft_split("Salut les homies jjjfj                    ", " ");
	while(tab[++i])
		printf("%s\n", tab[i]);
}