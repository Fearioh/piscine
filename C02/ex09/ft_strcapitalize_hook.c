/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_hook.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:34:01 by adelat            #+#    #+#             */
/*   Updated: 2024/04/28 12:50:55 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char c)
{
		if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
			return 0;
	return 1;
}

int	ft_str_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
		return 0;
	return 1;
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (ft_str_is_alpha(str[0]))
		str[0] -= 32;
	while (str[++i])
		if (ft_str_is_alpha(str[i]) && (!(ft_str_is_numeric(str[i - 1]) ||
			ft_str_is_alpha(str[i - 1]))))
			str[i] -= 32;
	return str;
}

#include <stdio.h>
int main(void)
{
	char c[] = "Salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	printf("\n");
	printf("%s\n", ft_strcapitalize(c));
}