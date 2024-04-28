/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:24:03 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 14:46:16 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
h
e
y
\0
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	if (!to_find[i])
		return str;
	while (str[i])
	{
		if (str[i] == to_find[j])
			found = i;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (!to_find[j])
				return (&(str[found]));
		}
		i++;
	}
	return NULL;
}

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);


int	main(void)
{
	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
}