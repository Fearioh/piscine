/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:47:24 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 15:33:21 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < size)
		count = count + ft_strlen(strs[i]);
	count = (count + ((size - 1) * ft_strlen(sep)));
	return count;
}

void	ft_join(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = -1;
	k = -1;
	l = -1;
	while (i < size)
	{
		while(strs[i][++j])
			str[++k] = strs[i][j];
		while(sep[++l] && i < size - 1)
			str[++k] = sep[l];
		l = -1;
		j = -1;
		i++;
	}
	str[++k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	int	memory;

	memory = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char) * 0);
		return str;
	}
	memory = ft_count(size, strs, sep);
	str = malloc(sizeof(char) * (memory + 1));
	ft_join(size, strs, sep, str);
	return str;
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char *str = ft_strjoin(argc, argv, "___");
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  str);
	free(str);
}