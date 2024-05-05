/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:10:54 by adelat            #+#    #+#             */
/*   Updated: 2024/05/05 15:58:07 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Bonjour les amis comment ca va " "

*/

#include <stdio.h>
#include <stdlib.h>

int ft_is_in_charset(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i] && charset)
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void ft_free(char **split)
{
	int i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}

int ft_strlen_from(char *str, char *charset)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (str[i] && str)
	{
		if (ft_is_in_charset(str[i], charset))
			return (size);
		i++;
		size++;
	}
	return (size + 1);
}



//-----------------------------------------------------------------------------
//!   Fonction pour connaitre la taille du malloc de mon grand tableau
//-----------------------------------------------------------------------------

int ft_size(char *str, char *charset)
{
	int i;
	int size;
	if (!str)
		return (0);
	while (str[i])
	{
		if (ft_is_in_charset(str[i], charset))
		{
			size++;
			while (ft_is_in_charset(str[i], charset))
				i++;
			continue ;
		}
		i++;
	}
	return (size + 2);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	int k;
	char **split;
	
	i = -1;
	j = -1;
	split = malloc(sizeof(char *) * (ft_size(str, charset)));
	if (!split)
		return (NULL);
	while (str[++i] && str)
	{
		k = -1;
		if (!ft_is_in_charset(str[i], charset))
		{
			split[++j] = malloc(sizeof(char) * ft_strlen_from(&str[i], charset));
			if (!split[j])
				return (ft_free(split), NULL);
			while (!ft_is_in_charset(str[i], charset))
				split[j][++k] = str[i++];
			split[j][++k] = '\0';
		}
	}
	split[++j] = NULL;
	return (split);
}

int	main(void)
{
	int i;
	char	**tab;
	
	i = 0;
	tab = ft_split("Salut les homies", " ");
	while(tab[i])
		printf("%s\n", tab[i]);
}
/*

       eeeeeeee hey les copains j'espere que ca va

	Taille totale du tableau 12 (1 de plus pour le NULL)
	
	sous chaine 1 : [h|\0]
	sous chaine 2 : [y|\0]
	sous chaine 3 : [l|\0]
	sous chaine 4 : [s|\0]
	sous chaine 5 : [c|o|p|a|i|n|s|\0]
	sous chaine 6 : etc
	sous chaine 7 : etc
	sous chaine 8 : etc
	sous chaine 9 : etc
	sous chaine 10 : etc
	sous chaine 11 : etc
	sous chaine 12 : NULL
	   

*/