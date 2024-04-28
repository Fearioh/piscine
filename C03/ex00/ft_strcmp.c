/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:21:24 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 13:45:29 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return s1[i] - s2[i];
		else if (s1[i] < s2[i])
			return s1[i] - s2[i];
		i++;
	}
	if (s1[i])
		return s1[i];
	else if (s2[i])
		return 0 - s2[i];
	return 0;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	if (s1[0] && !s2[0])
		return s1[0];
	else if (!s1[0] && s2[0])
		return 0 - s2[0];
	else if (!s1[0] && !s2[0])
		return 0;
	cmp = ft_comp(s1, s2);
	return cmp;
}


#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}