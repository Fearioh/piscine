/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:46:58 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 15:12:45 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>


unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	
	i = nb;
	if (i > ft_strlen(dest))
		i = ft_strlen(dest);
	k = ft_strlen(src) + i;
	i = ft_strlen(dest);
	j = -1;
	while(src[++j] && j < nb)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return k;
}

int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%u : %lu\n", ft_strlcat(s1a, s2a, 6), strlcat(s1b, s2b, 6));
	printf("%u : %lu\n", ft_strlcat(s3a, s4a, 10), strlcat(s3b, s4b, 10));
	printf("%u : %lu\n", ft_strlcat(s5a, s6a, 4), strlcat(s5b, s6b, 4));
	printf("%u : %lu\n", ft_strlcat(s7a, s8a, 0), strlcat(s7b, s8b, 0));
	
	/*	
	printf("\n\nDetails:\n");

	printf("%s:%s\n%s:%s\n", s1a, s1b, s2a, s2b);
	printf("%s:%s\n%s:%s\n", s3a, s3b, s4a, s4b);
	printf("%s:%s\n%s:%s\n", s5a, s5b, s6a, s6b);
	printf("%s:%s\n%s:%s\n", s7a, s7b, s8a, s8b);
	*/
}
