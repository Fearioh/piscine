/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 13:28:40 by adelat            #+#    #+#             */
/*   Updated: 2024/05/26 13:33:13 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_STRUCT_H
#define ATOI_STRUCT_H

#include <stdio.h>

typedef struct s_atoi_struct
{
	int result;
	int sign;
	int i;
}	t_atoi_struct;


#endif