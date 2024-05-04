/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:33:55 by adelat            #+#    #+#             */
/*   Updated: 2024/05/01 10:55:16 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **lacrim;

	lacrim = malloc(sizeof(char *) * (5));
	int i = 0;
	while (i < 5)
	{
		lacrim[i] = malloc(sizeof(char) * (30));
		i++;
	}
	
	i = -1;
	while (i < 5)
		free(lacrim[++i]);
	free(lacrim);
}