/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:00:16 by adelat            #+#    #+#             */
/*   Updated: 2024/04/24 15:13:13 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
		
	return (dest);
}

#include <string.h>

int	main(void)
{
	char dest[1000];
	
	printf("%s NORMALE\n", strncpy(dest, "Merci pour la soirée aux cacatacombes", 8));
	printf("%s PAS NORMALE\n", ft_strncpy(dest, "Merci pour la soirée aux cacatacombes", 8));
}